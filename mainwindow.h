#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTimer>
#include <QString>
#include <QVector>
#include <QColor>
#include <QtWidgets/QtWidgets>
#include <QCoreApplication>
#include <QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QSizePolicy>
#include <QtWidgets/QMainWindow>
#include <QDateTime>

class QLabel;

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QLabel *testLabel;
};
#endif // MAINWINDOW_H