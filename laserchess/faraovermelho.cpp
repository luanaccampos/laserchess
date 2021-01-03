#include "faraovermelho.h"

void FaraoVermelho::draw(QPainter *p)
{
    QPixmap d(":/imagens/faraoVermelho");
    QTransform t;
    t.rotate(grau);
    d = d.transformed(t);
    p->drawPixmap(QRect(x, y, 100, 100), d);
}

string FaraoVermelho::tipo()
{
    return "FV";
}

vector<int> FaraoVermelho::hit(int k)
{
    return {-1, x+50, y+50};
}
