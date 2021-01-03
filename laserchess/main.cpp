#include <QApplication>
#include "janela.h"
#include "tabuleiro.h"
#include "janelavitoria.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    janela j;
    j.show();

    return app.exec();
}
