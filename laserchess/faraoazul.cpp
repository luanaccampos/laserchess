#include "faraoazul.h"

void FaraoAzul::draw(QPainter *p)
{
    QPixmap d(":/imagens/faraoAzul");
    QTransform t;
    t.rotate(grau);
    d = d.transformed(t);
    p->drawPixmap(QRect(x, y, 100, 100), d);
}

string FaraoAzul::tipo()
{
    return "FA";
}

vector<int> FaraoAzul::hit(int k)
{
    return {-1, x+50, y+50};
}


