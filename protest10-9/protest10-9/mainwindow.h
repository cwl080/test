#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QTableView>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_queryButton_clicked();

    void on_allBox_clicked();

    void on_waveBox_clicked();

    void on_windBox_clicked();

    void on_humBox_clicked();

    void on_airpBox_clicked();

    void on_watertBox_clicked();

    void on_buoyBox_clicked();

    void on_curBox_clicked();

    void on_excelButton_clicked();

private:
    Ui::MainWindow *ui;

protected:
    QString name = "buoyID as 浮标编号, source 来源, acTime 接收时间, paTime 数据时间";
    //获得接受数
    void getCount(QString nameQuery);
    //查询函数
    void query();
    //
     QSqlQueryModel *model;
     void Table2ExcelByHtml(QTableView *table);
     void getProgress();

};

#endif // MAINWINDOW_H
