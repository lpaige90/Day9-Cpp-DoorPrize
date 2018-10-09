#include "doorprize.h"
#include "ui_doorprize.h"
#include <QPixmap>

DoorPrize::DoorPrize(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoorPrize)
{
    ui->setupUi(this);
}

DoorPrize::~DoorPrize()
{
    delete ui;
}

void DoorPrize::on_button1_clicked()
{
    ui->button2->setEnabled(false);
    ui->button3->setEnabled(false);
    ui->door1->hide();
    ui->image1->show();
    ui->image1Text->show();
}

void DoorPrize::on_button2_clicked()
{
    ui->button1->setEnabled(false);
    ui->button3->setEnabled(false);
    ui->door2->hide();
    ui->image2->show();
    ui->image2Text->show();
}

void DoorPrize::on_button3_clicked()
{
    ui->button1->setEnabled(false);
    ui->button2->setEnabled(false);
    ui->door3->hide();
    ui->image3->show();
    ui->image3Text->show();
}

void DoorPrize::setImage1(QString imagePath) {
    QPixmap img(imagePath);
    ui->image1->setPixmap((img.scaled(ui->image1->width(),ui->image1->height(),Qt::KeepAspectRatio)));
    ui->image1->hide();
}

void DoorPrize::setImage2(QString imagePath) {
    QPixmap img(imagePath);
    ui->image2->setPixmap((img.scaled(ui->image2->width(),ui->image2->height(),Qt::KeepAspectRatio)));
    ui->image2->hide();
}

void DoorPrize::setImage3(QString imagePath) {
    QPixmap img(imagePath);
    ui->image3->setPixmap((img.scaled(ui->image3->width(),ui->image3->height(),Qt::KeepAspectRatio)));
    ui->image3->hide();
}

void DoorPrize::setImage1Text(QString imageText) {
    ui->image1Text->setText(imageText);
    ui->image1Text->hide();
}

void DoorPrize::setImage2Text(QString imageText) {
    ui->image2Text->setText(imageText);
    ui->image2Text->hide();
}

void DoorPrize::setImage3Text(QString imageText) {
    ui->image3Text->setText(imageText);
    ui->image3Text->hide();
}

void DoorPrize::setDoorImages() {
    QPixmap door1(":/images/door1.jpg");
    QPixmap door2(":/images/door2.jpg");
    QPixmap door3(":/images/door3.jpg");

    ui->door1->setPixmap((door1.scaled(ui->door1->width(),ui->door1->height(),Qt::KeepAspectRatio)));
    ui->door2->setPixmap((door2.scaled(ui->door2->width(),ui->door2->height(),Qt::KeepAspectRatio)));
    ui->door3->setPixmap((door3.scaled(ui->door3->width(),ui->door3->height(),Qt::KeepAspectRatio)));
}
