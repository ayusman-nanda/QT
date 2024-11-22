#include <QApplication>
#include <QLabel>
int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello world");
    label->setWindowTitle("My App");
    label->setAlignment(Qt::AlignCenter);
    label->resize(400,400);
    label->show();
    return app.exec();
}
