#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->cuadro->setText("");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString a=QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                    tr("User name:"), QLineEdit::Normal);
    ui->cuadro->setText(a);
    //También se puede para enteros, dobles o lineas de texto.
    //con getItem es para hacer que el ususario elija entre una lista de opciones previamente hecha
    //en el código.
}
