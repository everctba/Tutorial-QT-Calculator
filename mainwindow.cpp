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

int PrimeiroNumero, SegundoNumero, resultado;

void MainWindow::on_ButtonMais_clicked()
{
    PrimeiroNumero = ui->campoInput1->text().toInt();
    SegundoNumero =  ui->campoInput2->text().toInt();
    resultado = PrimeiroNumero + SegundoNumero;
    ui->resultado->setText(QString::number(resultado));

}



void MainWindow::on_ButtonMenos_clicked()
{
    PrimeiroNumero = ui->campoInput1->text().toInt();
    SegundoNumero =  ui->campoInput2->text().toInt();
    resultado = PrimeiroNumero - SegundoNumero;
    ui->resultado->setText(QString::number(resultado));
}


void MainWindow::on_ButtonDivide_clicked()
{
    PrimeiroNumero = ui->campoInput1->text().toInt();
    SegundoNumero =  ui->campoInput2->text().toInt();
    resultado = PrimeiroNumero / SegundoNumero;
    ui->resultado->setText(QString::number(resultado));
}


void MainWindow::on_ButtonMultiplica_clicked()
{
    PrimeiroNumero = ui->campoInput1->text().toInt();
    SegundoNumero =  ui->campoInput2->text().toInt();
    resultado = PrimeiroNumero * SegundoNumero;
    ui->resultado->setText(QString::number(resultado));
}

