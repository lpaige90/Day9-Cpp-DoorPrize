#include <iostream>
#include "doorprize.h"
#include <QApplication>
#include <QPixmap>
#include <QLabel>
#include <vector>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DoorPrize w;
    w.show();

    int imageCount = 10;
    int iteration = 0;
    int randomImage;
    QString imageArray[3];
    QString imageTextArray[3];
    QString imagePath = ":/images/";
    QString image1Path, image2Path, image3Path;

    srand(time(NULL));

    std::vector<QString> imageNames = { "cupcakes.jpg", "death.jpg", "donut.jpg", "flowers.jpg", "macaroons.jpg", "marshmallows.jpg", "nails.jpg", "potatoes.jpg", "presents.jpg", "toad.jpg" };
    std::vector<QString> imageDescriptions = { "Mmmm... cupcakes.", "Oh, dear. That's unfortunate.", "Lucky you.", "You must have a secret admirer.", "Everyone likes cookies.", "They're magically delicious.", "Just what you've always wanted.", "Perhaps you can make some chips?", "It's a Christmas Day miracle.", "How did that get there?" };

    while (imageNames.size()>7) {
        randomImage = rand() % imageCount;

        imageArray[iteration] = imageNames.at(randomImage);
        imageTextArray[iteration] = imageDescriptions.at(randomImage);
        imageNames.erase(imageNames.begin() + randomImage);
        imageDescriptions.erase(imageDescriptions.begin() + randomImage);
        ++iteration;
        --imageCount;
    }

    image1Path = imagePath + imageArray[0];
    image2Path = imagePath + imageArray[1];
    image3Path = imagePath + imageArray[2];

    w.setImage1(image1Path);
    w.setImage2(image2Path);
    w.setImage3(image3Path);

    w.setImage1Text(imageTextArray[0]);
    w.setImage2Text(imageTextArray[1]);
    w.setImage3Text(imageTextArray[2]);

    w.setDoorImages();

    return a.exec();
}
