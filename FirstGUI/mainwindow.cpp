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



void MainWindow::on_pushButton_2_clicked()
{
    QString text = ui->t1->toPlainText();
    float num1 = text.toFloat();
    QString text1 = ui->t2->toPlainText();
    float num2 = text1.toFloat();
    float sum = num1 + num2;
    ui->l1->setText("Sum = " + QString::number(sum, 'f', 2));

}


void MainWindow::on_pushButton_3_clicked()
{
    ui->t1->setText("");
    ui->t2->setText("");
    ui->l1->setText("");
}

