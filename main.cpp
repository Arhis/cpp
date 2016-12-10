#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    //—оздание окна window
    QWidget *window = new QWidget();

    //«адать им€ заголовка в окне window
    window->setWindowTitle("My own one");

    //«адать высоту и длину окна window
    window->setFixedSize(300,200);

    //—оздание кнопок
    QPushButton *bottom_one =   new QPushButton("1");
    QPushButton *bottom_two =   new QPushButton("2");
    QPushButton *bottom_three = new QPushButton("3");
    QPushButton *bottom_four =  new QPushButton("4");
    QPushButton *bottom_five =  new QPushButton("5");
    QPushButton *bottom_six =   new QPushButton("6");

    //—оздание первого вертикального сло€
    QVBoxLayout *v_layout_one = new QVBoxLayout;

    //ƒобавление первых трех кнопок в первый вертикальный слой
    v_layout_one->addWidget(bottom_one);
    v_layout_one->addWidget(bottom_two);
    v_layout_one->addWidget(bottom_three);

    //—оздание второго вертикального сло€
    QVBoxLayout *v_layout_two = new QVBoxLayout;

    //ƒобавление последующих трех кнопок во второй вертикальный слой
    v_layout_two->addWidget(bottom_four);
    v_layout_two->addWidget(bottom_five);
    v_layout_two->addWidget(bottom_six);

    //—оздание основного горизонтального сло€
    QHBoxLayout *h_layout = new QHBoxLayout;

    //ƒобавление двух вертикальных слоев с кнопками к основному горизонтальному слою
    h_layout->addLayout(v_layout_one);
    h_layout->addLayout(v_layout_two);

    //”становка горизонтального сло€ как основного в окне window
    window->setLayout(h_layout);

    //ѕоказать окно window
    window->show();

    return app.exec();
}
