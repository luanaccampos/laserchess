#include "anubisazul.h"

void AnubisAzul::draw(QPainter *p)
{
    QPixmap d(":/imagens/anubisAzul");
    QTransform t;
    t.rotate(grau);
    d = d.transformed(t);
    p->drawPixmap(QRect(x, y, 100, 100), d);
}

string AnubisAzul::tipo()
{
    return "AA";
}

vector<int> AnubisAzul::hit(int k)
{
    if((grau == 0 and k != 1) or (grau == 90 and k != 2) or (grau == 180 and k != 0) or (grau == 270 and k != 3))
        return {-1, x+50, y+50};
    else
        return {5, x+50, y+50};
}
