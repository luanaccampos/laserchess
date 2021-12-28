#include "janela.h"

janela::janela(QWidget *parent) : QMainWindow(parent)
{
    setFixedSize(700, 500);
    setStyleSheet("background-color: rgb(255, 255, 255);");
    setWindowTitle("LASER CHESS");
    setWindowIcon(QIcon(":/imagens/africa"));

    QSize size = QGuiApplication::primaryScreen()->size();
    int x = (size.width() - 700)/2;
    int y = (size.height() - 500)/2;
    move(x, y);

    QPushButton *botao = new QPushButton(this);
    botao->setText("CLASSIC");
    botao->setGeometry(250, 220, 200, 50);
    connect(botao, SIGNAL(clicked(bool)), this, SLOT(classic()));

    QPushButton *d = new QPushButton(this);
    d->setText("DYNASTY");
    d->setGeometry(250, 290, 200, 50);
    connect(d, SIGNAL(clicked(bool)), this, SLOT(dynasty()));

    QPushButton *c = new QPushButton(this);
    c->setText("CAIRO");
    c->setGeometry(250, 360, 200, 50);
    connect(c, SIGNAL(clicked(bool)), this, SLOT(cairo()));
}

void janela::paintEvent(QPaintEvent *event)
{
    QPainter *p = new QPainter(this);
    p->drawPixmap(QRect(50, 70, 600, 66),QPixmap(":/imagens/laserchess"));
    delete p;
}

void janela::abre(string jogo)
{
    close();
    tabuleiro *t = new tabuleiro(jogo, this);
    t->show();
}

void janela::classic()
{
    abre("classic");
}

void janela::dynasty()
{
    abre("dynasty");
}

void janela::cairo()
{
    abre("cairo");
}
