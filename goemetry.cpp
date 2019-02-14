#include "goemetry.h"

Goemetry::Goemetry(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("Geometry"));
    xLabel =new QLabel(tr("x():"));
    xValueLabel =new QLabel;
    yLabel =new QLabel(tr("y():"));
    yValueLabel =new QLabel;
    FrmLabel =new QLabel(tr("Frame:"));
    FrmValueLabel =new QLabel;
    posLabel =new QLabel(tr("pos():"));
    posValueLabel =new QLabel;
    geoLabel =new QLabel(tr("geometry():"));
    geoValueLabel =new QLabel;
    widthLabel =new QLabel(tr("width():"));
    widthValueLabel =new QLabel;
    heightLabel =new QLabel(tr("height():"));
    heightValueLabel =new QLabel;
    rectLabel =new QLabel(tr("rect():"));
    rectValueLabel =new QLabel;
    sizeLabel =new QLabel(tr("size():"));
    sizeValueLabel =new QLabel;
    mainLayout =new QGridLayout(this);
    mainLayout->addWidget(xLabel,0,0);
    mainLayout->addWidget(xValueLabel,0,1);
    mainLayout->addWidget(yLabel,1,0);
    mainLayout->addWidget(yValueLabel,1,1);
    mainLayout->addWidget(posLabel,2,0);
    mainLayout->addWidget(posValueLabel,2,1);
    mainLayout->addWidget(FrmLabel,3,0);
    mainLayout->addWidget(FrmValueLabel,3,1);
    mainLayout->addWidget(geoLabel,4,0);
    mainLayout->addWidget(geoValueLabel,4,1);
    mainLayout->addWidget(widthLabel,5,0);
    mainLayout->addWidget(widthValueLabel,5,1);
    mainLayout->addWidget(heightLabel,6,0);
    mainLayout->addWidget(heightValueLabel,6,1);
    mainLayout->addWidget(rectLabel,7,0);
    mainLayout->addWidget(rectValueLabel,7,1);
    mainLayout->addWidget(sizeLabel,8,0);
    mainLayout->addWidget(sizeValueLabel,8,1);
    updateLabel();
}

Goemetry::~Goemetry()
{

}

void Goemetry::updateLabel()
{
    xValueLabel->setText(QString::number(x()));
    yValueLabel->setText(QString::number(y()));
    FrmValueLabel->setText(QString::number(frameGeometry().x())+','+QString::number(frameGeometry().y())+','+
                           QString::number(frameGeometry().width())+','+QString::number(frameGeometry().height()));
    posValueLabel->setText(QString::number(pos().x())+','+QString::number(pos().y()));
    geoValueLabel->setText(QString::number(geometry().x())+','+QString::number(geometry().y())+','+
                           QString::number(geometry().width())+','+QString::number(geometry().height()));
    widthValueLabel->setText(QString::number(width()));
    heightValueLabel->setText(QString::number(height()));
    rectValueLabel->setText(QString::number(rect().x())+','+QString::number(rect().y())+','+
                            QString::number(rect().width())+','+QString::number(rect().height()));
    sizeValueLabel->setText(QString::number(size().width())+','+QString::number(size().height()));//number是静态函数可以直接访问


}

void Goemetry::moveEvent(QMoveEvent *)
{
    updateLabel();
}

void Goemetry::resizeEvent(QResizeEvent *)
{
    updateLabel();
}
