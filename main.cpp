#include <iostream>

#include <QtWidgets>
void handleButton(){

}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.resize(320, 240);
    window.show();

    QPushButton *button = new QPushButton(
            QApplication::translate("childWidget", "Press me"), &window);
    button->move(100, 100);
    button->show();


    QLabel *label = new QLabel(
            QApplication::translate("childWidget", "0"), &window);
    label->move(150, 150);
    label->show();

    QObject::connect(button, SIGNAL (clicked()), &app, SLOT (quit()));

    return app.exec();
}