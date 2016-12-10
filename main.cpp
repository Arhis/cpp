#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    //�������� ���� window
    QWidget *window = new QWidget();

    //������ ��� ��������� � ���� window
    window->setWindowTitle("My own one");

    //������ ������ � ����� ���� window
    window->setFixedSize(300,200);

    //�������� ������
    QPushButton *bottom_one =   new QPushButton("1");
    QPushButton *bottom_two =   new QPushButton("2");
    QPushButton *bottom_three = new QPushButton("3");
    QPushButton *bottom_four =  new QPushButton("4");
    QPushButton *bottom_five =  new QPushButton("5");
    QPushButton *bottom_six =   new QPushButton("6");

    //�������� ������� ������������� ����
    QVBoxLayout *v_layout_one = new QVBoxLayout;

    //���������� ������ ���� ������ � ������ ������������ ����
    v_layout_one->addWidget(bottom_one);
    v_layout_one->addWidget(bottom_two);
    v_layout_one->addWidget(bottom_three);

    //�������� ������� ������������� ����
    QVBoxLayout *v_layout_two = new QVBoxLayout;

    //���������� ����������� ���� ������ �� ������ ������������ ����
    v_layout_two->addWidget(bottom_four);
    v_layout_two->addWidget(bottom_five);
    v_layout_two->addWidget(bottom_six);

    //�������� ��������� ��������������� ����
    QHBoxLayout *h_layout = new QHBoxLayout;

    //���������� ���� ������������ ����� � �������� � ��������� ��������������� ����
    h_layout->addLayout(v_layout_one);
    h_layout->addLayout(v_layout_two);

    //��������� ��������������� ���� ��� ��������� � ���� window
    window->setLayout(h_layout);

    //�������� ���� window
    window->show();

    return app.exec();
}
