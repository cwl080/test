#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateEdit>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

#include <QTableWidget>
#include <QFileDialog>
#include <QDesktopServices>
#include <QMessageBox>
#include <QAxObject>
#include <QProgressDialog>
#include <QWeb>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->allBox->setChecked(true);

    //设置窗口的最小，标题，图标
    setMinimumSize(500,250);
    setWindowTitle("信息查询");
    setWindowIcon(QIcon(":/images/icon"));

    model = new QSqlQueryModel(this);

//  动态获取buoyID
    QSqlQuery query;
    int max_id = 0;
    query.prepare("select max(buoyID) from main");
    if(!query.exec()){
        qDebug() << query.lastError();
    }
    else{
        while(query.next()){
            max_id = query.value(0).toInt();
        }
    }
    for(int i = 1; i <= max_id; i++){
        ui->comboBox->addItem(QString("%1").arg(i));
    }

    //浮标号
//    ui->comboBox->addItem("1");
//    ui->comboBox->addItem("2");
//    ui->comboBox->addItem("3");

    //设置数据适应当前长度
    ui->tableView->resizeColumnsToContents();
//    ui->tableView->resizeRowsToContents();

    //设置表头格式
    ui->tableView->horizontalHeader()->setStyleSheet("QHeaderView::section {background-color:silver;"
                                                     "color: black;"
                                                     "padding-left: 4px;border: 1px solid #6c6c6c;}");

    QWebView view;
    view.load(QUrl("http://www.baidu.com"));
        view.show();
}



MainWindow::~MainWindow()
{

    delete ui;
}



void MainWindow::on_queryButton_clicked()
{
    //查询时间段

    QString startTime = ui->dateEditStart->text();
    QString endTime = ui->dateEditEnd->text();
    //查询的浮标标号
    int buoyID = (ui->comboBox->currentText()).toInt();
    QString nameQuery = "buoyID  浮标编号, source 来源, acTime 接收时间, paTime 数据时间, waveAveHigh 平均浪高, windStr 风强, humStr 湿度, airStr 空气质量, buoySta 浮标状态, curQua 海流和水质";

    if(ui->allBox->isChecked()){
        //查询全部数据
        model->setQuery(QString(" select %1 "
                                " from main "
                                " where buoyID = %2"
                                " and acTime >= '%3' "
                                " and acTime <= '%4' "
                                " ; ").arg(nameQuery).arg(buoyID).arg(startTime).arg(endTime));
    }

    //取消选择时消除关于这一项的记录
    else{
        model->setQuery(QString(" select %1 "
                                " from main "
                                " where buoyID = %2"
                                " and acTime >= '%3' "
                                " and acTime <= '%4' "
                                " ; ").arg(name).arg(buoyID).arg(startTime).arg(endTime));
    }
    getCount(nameQuery);
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
//    ui->tableView->resizeRowsToContents();
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

void MainWindow::on_allBox_clicked()
{

    if(ui->allBox->isChecked()){
        name = "buoyID as 浮标编号, source 来源, acTime 接收时间, paTime 数据时间";
        //查询时间段
        QString startTime = ui->dateEditStart->text();
        QString endTime = ui->dateEditEnd->text();
        //查询的浮标标号
        int buoyID = (ui->comboBox->currentText()).toInt();
        QString nameQuery = "buoyID  浮标编号, source 来源, acTime 接收时间, paTime 数据时间, waveAveHigh 平均浪高, windStr 风强, humStr 湿度, airStr 空气质量, buoySta 浮标状态, curQua 海流和水质";

        model->setQuery(QString(" select %1 "
                                " from main "
                                " where buoyID = %2"
                                " and acTime >= '%3' "
                                " and acTime <= '%4' "
                                " ; ").arg(nameQuery).arg(buoyID).arg(startTime).arg(endTime));
        ui->tableView->setModel(model);
        ui->tableView->resizeColumnsToContents();
//        ui->tableView->resizeRowsToContents();
        ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);  //不可编辑
        ui->airpBox->setChecked(false);
        ui->buoyBox->setChecked(false);
        ui->waveBox->setChecked(false);
        ui->watertBox->setChecked(false);
        ui->windBox->setChecked(false);
        ui->curBox->setChecked(false);
        ui->humBox->setChecked(false);
        getCount(nameQuery);
    }
}

void MainWindow::on_waveBox_clicked()
{

    if(ui->waveBox->isChecked()){
        name += ", waveAveHigh 平均浪高";
    }

    //取消选择时消除关于这一项的记录
    else{
        name.remove(", waveAveHigh 平均浪高");
    }
    query();

}

void MainWindow::on_windBox_clicked()
{
    if(ui->windBox->isChecked()){
        name += ", windStr 风强";
    }

    //取消选择时消除关于这一项的记录
    else{
        name.remove(", windStr 风强");

    }
    query();

}

void MainWindow::on_humBox_clicked()
{
    if(ui->humBox->isChecked()){
        name += ", humStr 湿度";
        //查询全部数据
    }

    //取消选择时消除关于这一项的记录
    else{
        name.remove(", humStr 湿度");
    }
    query();

}

void MainWindow::on_airpBox_clicked()
{

    if(ui->airpBox->isChecked()){
        name += ", airStr 空气质量";
    }

    //取消选择时消除关于这一项的记录
    else{
        name.remove(", airStr 空气质量");
    }
    query();

}

void MainWindow::on_watertBox_clicked()
{

}

void MainWindow::on_buoyBox_clicked()
{

    if(ui->buoyBox->isChecked()){
        name += ", buoySta 浮标状态";
    }
    //取消选择时消除关于这一项的记录
    else{
        name.remove(", buoySta 浮标状态");
    }
    query();

}

void MainWindow::on_curBox_clicked()
{
    if(ui->curBox->isChecked()){
        name += ", curQua 海流和水质";
    }

    //取消选择时消除关于这一项的记录
    else{
        name.remove(", curQua 海流和水质");
    }

    query();

}

void MainWindow::getCount(QString nameQuery){
    QSqlQuery query;
    QString startTime = ui->dateEditStart->text();
    QString endTime = ui->dateEditEnd->text();
    int buoyID = (ui->comboBox->currentText()).toInt();

    QString strbd;  //北斗个数
    QString strca;  //cmda个数
    QString strcount;   //总个数

    int caCount = 0;
    int bdCount = 0;
    float count = 0;




    query.exec(QString(" select %1 "
                       " from main "
                       " where buoyID = %2"
                       " and acTime >= '%3' "
                       " and acTime <= '%4'"
                       " and source = '北斗' "
                       " ; ").arg(nameQuery).arg(buoyID).arg(startTime).arg(endTime));

    while(query.next())
    {
        bdCount++;
    }

    query.exec(QString(" select %1 "
                       " from main "
                       " where buoyID = %2"
                       " and acTime >= '%3' "
                       " and acTime <= '%4'"
                       " and source = 'CDMA' "
                       " ; ").arg(nameQuery).arg(buoyID).arg(startTime).arg(endTime));

    while(query.next())
    {
        caCount++;
    }

    count = bdCount + caCount;


    //转化为字符显示
    strbd = QString::number(bdCount,10);
    strca = QString::number(caCount,10);
    strcount = QString::number(count,10.0,0);
    ui->label_bdjs->setText(strbd);
    ui->label_zj->setText(strcount);
    ui->label_cjs->setText(strca);
}


//查询
void MainWindow::query(){

    ui->allBox->setChecked(false);
    //查询时间段
    QString startTime = ui->dateEditStart->text();
    QString endTime = ui->dateEditEnd->text();
    //查询的浮标标号
    int buoyID = (ui->comboBox->currentText()).toInt();
    model->setQuery(QString(" select %1 "
                            " from main "
                            " where buoyID = %2"
                            " and acTime >= '%3' "
                            " and acTime <= '%4' "
                            " ; ").arg(name).arg(buoyID).arg(startTime).arg(endTime));
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
//    ui->tableView->resizeRowsToContents();
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    getCount(name);
}


//第一个参数是页面上的表格，第二个是导出文件的表头数据
 void MainWindow::Table2ExcelByHtml(QTableView *table)
 {
     QString fileName = QFileDialog::getSaveFileName(table,tr("保存"),QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),
                                                       tr("Microsoft Excel 文件(*.xls);;Microsoft Excel 文件(*.xlsx);;Microsoft Excel 97-2003 文件(*.xls)"));
     if (fileName!="")
     {
         QAxObject *excel = new QAxObject;
         if (excel->setControl("Excel.Application")) //连接Excel控件
         {
             excel->dynamicCall("SetVisible (bool Visible)","false");//不显示窗体
             excel->setProperty("DisplayAlerts", false);//不显示任何警告信息。如果为true那么在关闭是会出现类似“文件已修改，是否保存”的提示
             QAxObject *workbooks = excel->querySubObject("WorkBooks");//获取工作簿集合
             workbooks->dynamicCall("Add");//新建一个工作簿
             QAxObject *workbook = excel->querySubObject("ActiveWorkBook");//获取当前工作簿
             QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1);
             //QTableView 获取列数
            int colcount=ui->tableView->model()->columnCount();
            //QTableView 获取行数
            int rowcount=ui->tableView->model()->rowCount();
            int i,j;
             //QTablewidget 获取数据的列数
//             int colcount=table->columnCount();
//              //QTablewidget 获取数据的行数
//             int rowscount=table->rowCount();


             //QTableView 获取列数
//　　　　　　 int colount=ui->tableView->model()->columnCount();
             //QTableView 获取行数
//　　　　　　　 int rowcount=ui->tableView->model()->rowCount();

             QAxObject *cell,*col;
             cell=worksheet->querySubObject("Cells(int,int)", 1, 1);
//             cell->dynamicCall("SetValue(const QString&)", title);
//             cell->querySubObject("Font")->setProperty("Size", 18);
             //调整行高
             worksheet->querySubObject("Range(const QString&)", "1:1")->setProperty("RowHeight", 30);
//             //合并标题行
//             QString cellTitle;
//             cellTitle.append("A1:");
//             cellTitle.append(QChar(colcount - 1 + 'A'));
//             cellTitle.append(QString::number(1));
             QAxObject *range = worksheet->querySubObject("Range(const QString&)");
//             range->setProperty("WrapText", true);
//             range->setProperty("MergeCells", true);
//             range->setProperty("HorizontalAlignment", -4108);//xlCenter
//             range->setProperty("VerticalAlignment", -4108);//xlCenter
             //列标题
             for(i=0;i<colcount;i++)
             {
                 QString columnName;
                 columnName.append(QChar(i + 'A'));
                 columnName.append(":");
                 columnName.append(QChar(i + 'A'));
                 col = worksheet->querySubObject("Columns(const QString&)", columnName);
                 col->setProperty("ColumnWidth", table->columnWidth(i)/6);
                 cell=worksheet->querySubObject("Cells(int,int)", 1, i+1);
                 //QTableWidget 获取表格头部文字信息
//                 columnName=table->horizontalHeaderItem(i)->text();
                 //QTableView 获取表格头部文字信息
                  columnName=ui->tableView->model()->headerData(i,Qt::Horizontal,Qt::DisplayRole).toString();
                 cell->dynamicCall("SetValue(const QString&)", columnName);
                 cell->querySubObject("Font")->setProperty("Bold", true);
                 cell->querySubObject("Interior")->setProperty("Color",QColor(191, 191, 191));
                 cell->setProperty("HorizontalAlignment", -4108);//xlCenter
                 cell->setProperty("VerticalAlignment", -4108);//xlCenter
             }

            //数据区

//            //QTableWidget 获取表格数据部分
//             for(i=0;i<rowcount;i++){
//                 for (j=0;j<colcount;j++)
//                 {
//                     worksheet->querySubObject("Cells(int,int)", i+3, j+1)->dynamicCall("SetValue(const QString&)", table->item(i,j)?table->item(i,j)->text():"");
//                 }
//             }


//            QTableView 获取表格数据部分
            for(i=0;i<rowcount;i++) //行数
             {
                 for (j=0;j<colcount;j++)   //列数
                 {
                     QModelIndex index = ui->tableView->model()->index(i, j);
                     QString strdata=ui->tableView->model()->data(index).toString();
                     worksheet->querySubObject("Cells(int,int)", i+2, j+1)->dynamicCall("SetValue(const QString&)", strdata);
                 }
             }


             //画框线
             QString lrange;
             lrange.append("A1:");
             lrange.append(colcount - 1 + 'A');
             lrange.append(QString::number(ui->tableView->model()->rowCount() + 1));
             range = worksheet->querySubObject("Range(const QString&)", lrange);
             range->querySubObject("Borders")->setProperty("LineStyle", QString::number(1));
             range->querySubObject("Borders")->setProperty("Color", QColor(0, 0, 0));
             //调整数据区行高
             QString rowsName;
             rowsName.append("1:");
             rowsName.append(QString::number(ui->tableView->model()->rowCount() + 1));
             range = worksheet->querySubObject("Range(const QString&)", rowsName);
             range->setProperty("RowHeight", 20);
             workbook->dynamicCall("SaveAs(const QString&)",QDir::toNativeSeparators(fileName));//保存至fileName
             workbook->dynamicCall("Close()");//关闭工作簿
             excel->dynamicCall("Quit()");//关闭excel
             delete excel;
             excel=NULL;
             if (QMessageBox::question(NULL,"完成","文件已经导出，是否现在打开？",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
             {
                 QDesktopServices::openUrl(QUrl("file:///" + QDir::toNativeSeparators(fileName)));
             }
         }
         else
         {
             QMessageBox::warning(NULL,tr("错误"),tr("未能创建 Excel 对象，请安装 Microsoft Excel。"),QMessageBox::Apply);
         }
     }
 }



void MainWindow::on_excelButton_clicked()
{
    Table2ExcelByHtml(ui->tableView);
}
