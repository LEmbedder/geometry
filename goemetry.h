#ifndef GOEMETRY_H
#define GOEMETRY_H

#include <QDialog>
#include <QLabel>
#include <QGridLayout>
class Goemetry : public QDialog
{
    Q_OBJECT

public:
    Goemetry(QWidget *parent = 0);
    ~Goemetry();
    void updateLabel();
private:
    QLabel *xLabel;
    QLabel *xValueLabel;
    QLabel *yLabel;
    QLabel *yValueLabel;
    QLabel *FrmLabel;
    QLabel *FrmValueLabel;
    QLabel *posLabel;
    QLabel *posValueLabel;
    QLabel *geoLabel;
    QLabel *geoValueLabel;
    QLabel *widthLabel;
    QLabel *widthValueLabel;
    QLabel *heightLabel;
    QLabel *heightValueLabel;
    QLabel *rectLabel;
    QLabel *rectValueLabel;
    QLabel *sizeLabel;
    QLabel *sizeValueLabel;
    QGridLayout *mainLayout;
protected:
    void moveEvent(QMoveEvent *);
    void resizeEvent(QResizeEvent *);
};

#endif // GOEMETRY_H
