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

void MainWindow::on_pushButton_clicked()
{
    // Obtener el texto del campo de texto "textEdit"
    QString campoTexto = ui->textEdit->toPlainText();

    // Crear un objeto Cliente usando el texto ingresado
    Cliente cliente(campoTexto.toStdString());

    // Actualizar los campos de línea con la información del cliente
    ui->lineNombre->setText(QString::fromStdString(cliente.getNombre()));
    ui->lineApellido->setText(QString::fromStdString(cliente.getApellido()));
    ui->lineCedula->setText(QString::fromStdString(cliente.getCedula()));
    ui->lineDireccion->setText(QString::fromStdString(cliente.getDireccion()));
    ui->lineTelefono->setText(QString::fromStdString(cliente.getTelefono()));
    ui->lineEmail->setText(QString::fromStdString(cliente.getEmail()));
}
