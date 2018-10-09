#ifndef DOORPRIZE_H
#define DOORPRIZE_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>

namespace Ui {
class DoorPrize;
}

class DoorPrize : public QMainWindow
{
    Q_OBJECT

public:
    explicit DoorPrize(QWidget *parent = nullptr);
    ~DoorPrize();
    void setImage1(QString imagePath);
    void setImage2(QString imagePath);
    void setImage3(QString imagePath);
    void setImage1Text(QString imageText);
    void setImage2Text(QString imageText);
    void setImage3Text(QString imageText);
    void setDoorImages();

private slots:
    void on_button1_clicked();
    void on_button2_clicked();
    void on_button3_clicked();

private:
    Ui::DoorPrize *ui;
    QPushButton button1, button2, button3;
    QLabel image1, image2, image3;
    QLabel image1Text, image2Text, image3Text;
    QLabel door1, door2, door3;
};

#endif // DOORPRIZE_H
