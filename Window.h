#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "QGraphicsScene"
#include "string"
#include "Logic/Logic.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Window : public QMainWindow
{
Q_OBJECT

public:
    explicit Window(QWidget *parent = nullptr);
    ~Window() override;

private:
    QGraphicsScene *scene;
    Ui::MainWindow *ui;
    Logic logic;
    void setComboBoxText();

private slots:
    void start();
    void setFilePath();
    void setHistogramm(std::vector<double> values);
};
#endif // MAINWINDOW_H
