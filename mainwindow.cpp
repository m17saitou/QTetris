#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testLabel = new QLabel("Hello");
    QHBoxLayout *main = new QHBoxLayout();
    main->addWidget(testLabel);
    QWidget *widget = new QWidget();
    widget->setLayout(main);
    setCentralWidget(widget);
}

MainWindow::~MainWindow()
{
}