#include "janelavitoria.h"

janelaVitoria::janelaVitoria(bool vencedor, QWidget *parent) : QMainWindow(parent)
{
    p = parent;
    setWindowTitle("VITÓRIA");
    setFixedSize(500, 300);
    setStyleSheet("background-color: rgb(255, 255, 255);");
    QLabel *l = new QLabel(this);
    l->setAlignment(Qt::AlignCenter);
    QFont f("Consolas", 18);
    l->setFont(f);

    QDesktopWidget *desktop = QApplication::desktop();
    int x = (desktop->width() - 500)/2;
    int y = (desktop->height() - 300)/2;
    move(x, y);

    if(vencedor) // azul
    {
        l->setText("Vitória do Azul!");
        l->setGeometry(0, 50, 500, 20);
    }
    else
    {
        l->setGeometry(0, 50, 500, 20);
        l->setText("Vitória do Vermelho!");
    }

    QPushButton *menu = new QPushButton(this);
    QPushButton *sair = new QPushButton(this);
    menu->setText("Menu");
    sair->setText("Sair");

    menu->setGeometry(150, 120, 200, 40);
    sair->setGeometry(150, 180, 200, 40);
    connect(menu, SIGNAL(clicked()), this, SLOT(menu()));
    connect(sair, SIGNAL(clicked()), this, SLOT(close()));
}

void janelaVitoria::menu()
{
    close();
    janela *j = new janela(this);
    j->show();
}

void janelaVitoria::closeEvent(QCloseEvent *event)
{
    p->close();
}
