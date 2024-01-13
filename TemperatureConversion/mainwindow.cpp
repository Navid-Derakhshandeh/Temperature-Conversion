#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double KTC,KTF,FTC,CTF,res1,res2,res3,res4;
void MainWindow::on_pushButton_clicked()
{
       KTC = ui->txtKTC->text().toDouble();
       KTF = ui->txtKTF->text().toDouble();
       FTC = ui->txtFTC->text().toDouble();
       CTF = ui->txtCTF->text().toDouble();
       res1 = KTC - 273.15;
       res2 = 1.8 * (KTF - 273.15) + 32;
       res3 = (FTC-32) * 5.9;
       res4 = (CTF * 9.5) + 32;
       ui->res1->setText(QString::number(res1));
       ui->res2->setText(QString::number(res2));
       ui->res3->setText(QString::number(res3));
       ui->res4->setText(QString::number(res4));
}
