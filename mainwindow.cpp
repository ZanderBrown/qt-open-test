#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFileDialog::

    connect(ui->pushButton, SIGNAL (released()), this, SLOT (native()));
    connect(ui->pushButton_2, SIGNAL (released()), this, SLOT (notNative()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::native() {
    QFileDialog::getOpenFileName(this, "Test");
}

void MainWindow::notNative() {
    QFileDialog::getOpenFileName(this, "Test", nullptr, nullptr, nullptr, QFileDialog::DontUseNativeDialog);
}
