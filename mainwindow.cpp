#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
QString first;
QString second;
QString mathoper;
float calculating;

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->insert("7");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->insert("8");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->insert("9");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->insert("4");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->insert("5");
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->insert("6");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit->insert("1");
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->lineEdit->insert("2");
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->insert("3");
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->lineEdit->insert(",");
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->lineEdit->insert("0");
}

void MainWindow::on_pushButton_12_clicked()
{
    second = ui->lineEdit->text();
    ui->label->setText(first + mathoper + second + "=");

    if (mathoper == "+") {
        calculating = first.toFloat() + second.toFloat();
        ui->lineEdit->setText(QString::number(calculating));
    }
    if (mathoper == "-") {
        calculating = first.toFloat() - second.toFloat();
        ui->lineEdit->setText(QString::number(calculating));
    }
    if (mathoper == "*") {
        calculating = first.toFloat() * second.toFloat();
        ui->lineEdit->setText(QString::number(calculating));
    }
    if (mathoper == "/") {
        calculating = first.toFloat() / second.toFloat();
        ui->lineEdit->setText(QString::number(calculating));
    }
}

void MainWindow::on_pushButton_14_clicked()
{
    first = ui->lineEdit->text();
    mathoper = "/";
    ui->label->setText(first + mathoper);
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_15_clicked()
{
    first = ui->lineEdit->text();
    mathoper = "*";
    ui->label->setText(first + mathoper);
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_16_clicked()
{
    first = ui->lineEdit->text();
    mathoper = "-";
    ui->label->setText(first + mathoper);
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_17_clicked()
{
        first = ui->lineEdit->text();
        mathoper = "+";
        ui->label->setText(first + mathoper);
        ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->lineEdit->setText("");
    ui->label->setText("");
}
