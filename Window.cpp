#include <QFileDialog>
#include <QMessageBox>
#include <QGraphicsRectItem>
#include "Window.h"
#include "./ui_zadanie.h"
#include "Logic/Logic.h"


Window::Window(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->comboBox->clear();
    ui->mat->setDigitCount(25);
    ui->cko->setDigitCount(25);
    ui->disp->setDigitCount(25);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    Logic logic = Logic();

    connect(ui->pushButton,SIGNAL(clicked()),
            this,
            SLOT(setFilePath()));

    connect(ui->start,SIGNAL(clicked()),
            this,
            SLOT(start()));
}

Window::~Window()
{
    delete ui;
}

void Window::setFilePath() {
    QString filePath = QFileDialog::getOpenFileName(this, tr("Open File"));

    if (logic.setDataFromFile(filePath.toStdString()) == 1){
        QMessageBox::about(this, "Title", "Выберите файл с данными");
    }else{
        ui->lineEdit->setText(filePath);
        setComboBoxText();
    }
}



void Window::setHistogramm(std::vector<double> data) {

    double min = data[0];
    double max = data[0];

    for (int i = 0; i < data.size(); i++) {
        if (data[i] < min){
            min = data[i];
        }
        if (data[i] > max){
            max = data[i];
        }
    }
    if(min >0){
        min = 0;
    }


    qreal barWidth = ui->graphicsView->viewport()->rect().width() * 0.85 / data.size();
    qreal barMaxHeight = ui->graphicsView->viewport()->rect().height() * 0.9;

    QGraphicsLineItem* y_axis = new QGraphicsLineItem(15, 0.5 - barMaxHeight * max/(max - min),
                                                      15, -barMaxHeight * min/(max - min) );
    QGraphicsLineItem* x_axis = new QGraphicsLineItem(15, 0,
                                                      ui->graphicsView->viewport()->rect().width() * 0.9,  0);
    scene->addItem(y_axis);
    scene->addItem(x_axis);
    qreal tickStep = ((0.5 - barMaxHeight * max/(max - min)))/11;
    qreal y = (0.5 - barMaxHeight * max/(max - min));

    double i = 0;
    while  (y <= -barMaxHeight * min/(max - min)){
        QGraphicsLineItem* y_tick = new QGraphicsLineItem(-15,  y,
                                                          15, y);
        QString lable = QString().setNum(max - 0.1 * max * i);
        QGraphicsTextItem* tickLable = new QGraphicsTextItem(lable);
        tickLable->setPos(-80, y);

        scene->addItem(y_tick);
        scene->addItem(tickLable);
        y -= tickStep;
        i++;
    }

    for (int i = 0; i < data.size(); i++) {
        QGraphicsRectItem* rect = new QGraphicsRectItem(QRectF(barWidth * i + 25,
                                                               0.5 - barMaxHeight * (data[i]/(max - min)),
                                                               barWidth * 0.95,
                                                               barMaxHeight * (data[i]/(max - min))));
        rect->setBrush(QBrush(Qt::blue));
        scene->addItem(rect);
    }

}

void Window::start() {
    if(logic.haveData()) {

        scene->clear();
        if (ui->comboBox->currentText() == QString("Re")) {
            QString matEsp = QString().setNum(logic.mathEsp(logic.getReValue()), 'f', 2);
            QString cko = QString().setNum(logic.cko(logic.getReValue()), 'f', 2);
            QString var = QString().setNum(logic.variations(logic.getReValue()), 'f', 2);
            ui->mat->display(matEsp);
            ui->disp->display(var);
            ui->cko->display(cko);
            setHistogramm(logic.getReValue());
        }
        if (ui->comboBox->currentText() == QString("Im")) {
            QString matEsp = QString().setNum(logic.mathEsp(logic.getImValue()), 'f', 2);
            QString cko = QString().setNum(logic.cko(logic.getImValue()), 'f', 2);
            QString var = QString().setNum(logic.variations(logic.getImValue()), 'f', 2);
            ui->mat->display(matEsp);
            ui->disp->display(var);
            ui->cko->display(cko);
            setHistogramm(logic.getImValue());
        }
        if (ui->comboBox->currentText() == QString("Abs")) {
            QString matEsp = QString().setNum(logic.mathEsp(logic.getAbs()), 'f', 2);
            QString cko = QString().setNum(logic.cko(logic.getAbs()), 'f', 2);
            QString var = QString().setNum(logic.variations(logic.getAbs()), 'f', 2);
            ui->mat->display(matEsp);
            ui->disp->display(var);
            ui->cko->display(cko);
            setHistogramm(logic.getAbs());
        }
        if (ui->comboBox->currentText() == QString("Phase")) {
            QString matEsp = QString().setNum(logic.mathEsp(logic.getPhase()), 'f', 2);
            QString cko = QString().setNum(logic.cko(logic.getPhase()), 'f', 2);
            QString var = QString().setNum(logic.variations(logic.getPhase()), 'f', 2);
            ui->mat->display(matEsp);
            ui->disp->display(var);
            ui->cko->display(cko);
            setHistogramm(logic.getPhase());
        }
    }else{
        QMessageBox::about(this, "Title", "Выберите файл с данными");
    }
}

void Window::setComboBoxText() {
    ui->comboBox->clear();
    qDebug()<< logic.isComplex();
if(logic.isComplex()){
    ui->comboBox->addItem(QString("Re"));
    ui->comboBox->addItem(QString("Im"));
    ui->comboBox->addItem(QString("Phase"));
    ui->comboBox->addItem(QString("Abs"));
}else{
    ui->comboBox->addItem(QString("Re"));
    ui->comboBox->addItem(QString("Abs"));
}
}

