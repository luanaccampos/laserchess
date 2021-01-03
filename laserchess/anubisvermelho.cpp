#include "anubisvermelho.h"


void AnubisVermelho::draw(QPainter *p)
{
    QPixmap d(":/imagens/anubisVermelho");
    QTransform t;
    t.rotate(grau);
    d = d.transformed(t);
    p->drawPixmap(QRect(x, y, 100, 100), d);
}

string AnubisVermelho::tipo()
{
    return "AV";
}

vector<int> AnubisVermelho::hit(int k)
{
    if((grau == 0 and k != 1) or (grau == 90 and k != 2) or (grau == 180 and k != 0) or (grau == 270 and k != 3))
        return {-1, x+50, y+50};
    else
        return {5, x+50, y+50};
}
