#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testLabel = new QLabel("Hello");
}

MainWindow::~MainWindow()
{
}