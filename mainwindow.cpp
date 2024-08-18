#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include <QMessageBox>

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
int primeiravez = 0;

void MainWindow::on_ButtonMais_clicked()
{
    PrimeiroNumero = ui->campoInput1->text().toInt();
    SegundoNumero =  ui->campoInput2->text().toInt();
    resultado = PrimeiroNumero + SegundoNumero;
    ui->resultado->setText(QString::number(resultado));

}



void MainWindow::on_ButtonMenos_clicked()
{
    printf("entrei no resultado");
    PrimeiroNumero = ui->campoInput1->text().toInt();
    SegundoNumero =  ui->campoInput2->text().toInt();
    if ((resultado > 0) && (primeiravez==0)){
        printf("entrei no resultado > 0");
        qInfo() << "C++ Style Info Message";
        resultado = resultado - SegundoNumero;
    }
    else{
        resultado = PrimeiroNumero - SegundoNumero;
    }

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




void MainWindow::on_zeraResultado_clicked()
{
    QMessageBox::about(this,"Sobre Projeto","Curso de programação Brasfoot");

}


void MainWindow::on_pushButton_clicked()
{

}

