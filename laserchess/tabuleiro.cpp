#include "tabuleiro.h"

tabuleiro::tabuleiro(string jogo, QWidget *parent) : QMainWindow(parent)
{
    H = {-1, -1};
    turn = true;
    S = false;
    setFixedSize(1200, 1000);
    setWindowTitle("LASER CHESS");
    setWindowIcon(QIcon(":/imagens/africa"));

    QDesktopWidget *desktop = QApplication::desktop();
    int x = (desktop->width() - 1200)/2;
    int y = (desktop->height() - 1000)/2;
    move(x, y);


    if(jogo == "classic")
        classic();
    else if(jogo == "dynasty")
        dynasty();
    else if(jogo == "cairo")
        cairo();


    QPixmap a(":/imagens/azul");
    label = new QLabel(this);
    label->setPixmap(a);
    label->setGeometry(580, 10, 40, 40);
}

void tabuleiro::classic()
{
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 10; j++)
            tab[i][j] = new Vazio(i, j, this);

    tab[3][2] = new PiramideAzul(3, 2, 180, this);
    tab[4][2] = new PiramideAzul(4, 2, 270, this);
    tab[7][9] = new SphinxAzul(7, 9, 180, this);
    tab[3][0] = new PiramideVermelha(3, 0, 0, this);
    tab[4][0] = new PiramideVermelha(4, 0, 90, this);
    tab[0][0] = new SphinxVermelha(0, 0, 0, this);
    tab[0][5] = new FaraoVermelho(0, 5, 0, this);
    tab[0][6] = new AnubisVermelho(0, 6, 0, this);
    tab[0][4] = new AnubisVermelho(0, 4, 0, this);
    tab[0][7] = new PiramideVermelha(0, 7, 90, this);
    tab[1][2] = new PiramideVermelha(1, 2, 180, this);
    tab[2][3] = new PiramideAzul(2, 3, 270, this);
    tab[3][4] = new ScarabVermelho(3, 4, 0, this);
    tab[3][5] = new ScarabVermelho(3, 5, 90, this);
    tab[4][4] = new ScarabAzul(4, 4, 90, this);
    tab[4][5] = new ScarabAzul(4, 5, 0, this);
    tab[7][2] = new PiramideAzul(7, 2, 270, this);
    tab[7][3] = new AnubisAzul(7, 3, 180, this);
    tab[7][4] = new FaraoAzul(7, 4, 180, this);
    tab[7][5] = new AnubisAzul(7, 5, 180, this);
    tab[4][9] = new PiramideAzul(4, 9, 180, this);
    tab[3][9] = new PiramideAzul(3, 9, 270, this);
    tab[4][7] = new PiramideVermelha(4, 7, 0, this);
    tab[3][7] = new PiramideVermelha(3, 7, 90, this);
    tab[5][6] = new PiramideVermelha(5, 6, 90, this);
    tab[6][7] = new PiramideAzul(6, 7, 0, this);

    update();
}

void tabuleiro::dynasty()
{
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 10; j++)
            tab[i][j] = new Vazio(i, j, this);

    tab[0][0] = new SphinxVermelha(0, 0, 0, this);
    tab[0][4] = new PiramideVermelha(0, 4, 180, this);
    tab[0][5] = new AnubisVermelho(0, 5, 0, this);
    tab[0][6] = new PiramideVermelha(0, 6, 90, this);
    tab[1][5] = new FaraoVermelho(1, 5, 0, this);
    tab[2][0] = new PiramideVermelha(2, 0, 0, this);
    tab[2][4] = new PiramideVermelha(2, 4, 180, this);
    tab[2][5] = new AnubisVermelho(2, 5, 0, this);
    tab[2][6] = new ScarabVermelho(2, 6, 90, this);
    tab[3][0] = new PiramideVermelha(3, 0, 90, this);
    tab[3][2] = new ScarabVermelho(3, 2, 0, this);
    tab[3][4] = new PiramideAzul(3, 4, 270, this);
    tab[3][6] = new PiramideAzul(3, 6, 90, this);
    tab[4][3] = new PiramideVermelha(4, 3, 270, this);
    tab[4][5] = new PiramideVermelha(4, 5, 90, this);
    tab[4][7] = new ScarabAzul(4, 7, 0, this);
    tab[4][9] = new PiramideAzul(4, 9, 270, this);
    tab[5][3] = new ScarabAzul(5, 3, 90, this);
    tab[5][4] = new AnubisAzul(5, 4, 180, this);
    tab[5][5] = new PiramideAzul(5, 5, 0, this);
    tab[5][9] = new PiramideAzul(5, 9, 180, this);
    tab[6][4] = new FaraoAzul(6, 4, 180, this);
    tab[7][3] = new PiramideAzul(7, 3, 270, this);
    tab[7][4] = new AnubisAzul(7, 4, 180, this);
    tab[7][5] = new PiramideAzul(7, 5, 0, this);
    tab[7][9] = new SphinxAzul(7, 9, 180, this);

    update();
}

void tabuleiro::cairo()
{
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 10; j++)
            tab[i][j] = new Vazio(i, j, this);

    tab[0][0] = new SphinxVermelha(0, 0, 270, this);
    tab[0][4] = new PiramideVermelha(0, 4, 180, this);
    tab[0][5] = new FaraoVermelho(0, 5, 0, this);
    tab[0][6] = new PiramideVermelha(0, 6, 90, this);
    tab[0][9] = new ScarabAzul(0, 9, 90, this);
    tab[1][5] = new AnubisVermelho(1, 5, 0, this);
    tab[1][6] = new PiramideVermelha(1, 6, 90, this);
    tab[2][0] = new PiramideVermelha(2, 0, 90, this);
    tab[2][3] = new ScarabVermelho(2, 3, 90, this);
    tab[2][5] = new AnubisVermelho(2, 5, 0, this);
    tab[3][0] = new PiramideVermelha(3, 0, 0, this);
    tab[3][4] = new PiramideAzul(3, 4, 270, this);
    tab[3][8] = new PiramideAzul(3, 8, 180, this);
    tab[4][1] = new PiramideVermelha(4, 1, 0, this);
    tab[4][5] = new PiramideVermelha(4, 5, 90, this);
    tab[4][9] = new PiramideAzul(4, 9, 180, this);
    tab[5][4] = new AnubisAzul(5, 4, 180, this);
    tab[5][6] = new ScarabAzul(5, 6, 90, this);
    tab[5][9] = new PiramideAzul(5, 9, 270, this);
    tab[6][3] = new PiramideAzul(6, 3, 270, this);
    tab[6][4] = new AnubisAzul(6, 4, 180, this);
    tab[7][0] = new ScarabVermelho(7, 0, 90, this);
    tab[7][3] = new PiramideAzul(7, 3, 270, this);
    tab[7][4] = new FaraoAzul(7, 4, 180, this);
    tab[7][5] = new PiramideAzul(7, 5, 0, this);
    tab[7][9] = new SphinxAzul(7, 9, 90, this);

    update();
}

vector<pair<int, int>> tabuleiro::selecao(int a, int b)
{
    vector<pair<int, int>> f;

    if(tab[a][b]->tipo()[0] == 's') // É sphinx
        return f;

    for(int i = a-1; i <= a+1; i++)
        for(int j = b-1; j <= b+1; j++)
            if(isvalid(i, j, tab[a][b]->tipo()))
                f.push_back({i, j});

    return f;
}

bool tabuleiro::isvalid(int x, int y, string tipo)
{
    if(x < 0 or x >= 8 or y < 0 or y >= 10) // fora dos limites
        return false;

    if(tab[x][y]->tipo() == "V") // posicao livre
    {
        if((turn and (y == 0 or (y == 8 and (x == 0 or x == 7)))) or (!turn and ((y == 9 or (y == 1 and (x == 0 or x == 7))))))
            return false;
        else
            return true;
    }

    if(tipo[0] == 'S') // É um escaravelho
        if((turn and (tab[x][y]->tipo() == "PA" or tab[x][y]->tipo() == "AA")) or (!turn and (tab[x][y]->tipo() == "AV" or tab[x][y]->tipo() == "PV")))
                return true;

    return false;
}

void tabuleiro::paintEvent(QPaintEvent *event)
{
    QPainter *p = new QPainter(this);

    QPixmap image(":/imagens/tabuleiro");
    p->drawPixmap(QRect(55, 65, 1090, 870), image);

    if(linhas.size() != 0)
    {
        QPen pen;
        pen.setBrush(Qt::red);
        pen.setWidth(3);
        p->setPen(pen);

        for(int i = 0; i < (int)linhas.size(); i++)
            p->drawLine(linhas[i]);

        linhas.clear();
    }

    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 10; j++)
        {
            tab[i][j]->draw(p);
            if(i == H.first and j == H.second)
                p->drawPixmap(QRect(j*110+55, i*110+65, 100, 100), QPixmap(":/imagens/dead"));
        }


    if(S) // Se está em modo selecao
    {
        pair<int, int> s = fila[0];

        int a = (s.second - 65)/110;
        int b = (s.first - 55)/110;

        free = selecao(a, b);

        QPixmap sel(":/imagens/selecao");

        for(int i = 0; i < (int)free.size(); i++)
        {
            int x = free[i].first;
            int y = free[i].second;
            p->drawPixmap(QRect(y*110+55, x*110+65, 100, 100), sel);
        }
    }

    delete p;
}

void tabuleiro::recebeClick(pair<int, int> x) // funcao responsavel por receber todos os clicks da janela e trata-los
{
    fila.push_back(x);

    if(fila.size() == 1)
    {
        int i = (fila[0].second-65)/110;
        int j = (fila[0].first-55)/110;

        if(H.first != -1)
        {
            int I = H.first;
            int J= H.second;
            delete tab[I][J];
            tab[I][J] = new Vazio(J*110+55, I*110+65, this);
            H = {-1, -1};
        }

        if(i == -1 or tab[i][j]->tipo() == "V" or (turn and tab[i][j]->tipo()[1] == 'V') or (!turn and tab[i][j]->tipo()[1] == 'A')) // lixo
            fila.clear();
        if((turn and tab[i][j]->tipo()[1] == 'A') or (!turn and tab[i][j]->tipo()[1] == 'V'))
            S = true;
    }

    if(fila.size() == 2) // foi selecionado um lugar p se movimentar
    {
        int i = (fila[0].second-65)/110;
        int j = (fila[0].first-55)/110;
        int a = (fila[1].second-65)/110;
        int b = (fila[1].first-55)/110;

        bool f = false;

        for(int p = 0; p < (int)free.size(); p++)
            if(free[p].first == a and free[p].second == b)
                f = true;

        if(f)
        {
            tab[i][j]->updatexy(fila[1].first, fila[1].second);
            tab[a][b]->updatexy(fila[0].first, fila[0].second);
            swap(tab[i][j], tab[a][b]);
            vez();
        }

        S = false;
        free.clear();
        fila.clear();
    }

    update();
    ganha();
}

void tabuleiro::mousePressEvent(QMouseEvent *event)
{
    recebeClick({-1, -1});
}

void tabuleiro::geraLinhas()
{
    vector<int> aux;
    int i, j;

    if(!turn) // vez do vermelho
    {
        aux = tab[0][0]->hit(-1);
        i = j = 0;
    }
    else // vez do azul
    {
        aux = tab[7][9]->hit(-1);
        i = 7; j = 9;
    }

    int k = aux[0];

    while(k != -1 and k != 5 and (i >= 0 and i < 8 and j >= 0 and j < 10))
    {
        QPoint p1(aux[1], aux[2]);

        if(k == 0) // p baixo
        {
            i++;
            while(i < 8 and tab[i][j]->tipo() == "V")
                i++;
        }
        else if(k == 2) // ->
        {
            j++;
            while(j < 10 and tab[i][j]->tipo() == "V")
                j++;
        }
        else if(k == 1) // p cima
        {
            i--;
            while(i >= 0 and tab[i][j]->tipo() == "V")
                i--;
        }
        else if(k == 3) // <-
        {
            j--;
            while(j >= 0 and tab[i][j]->tipo() == "V")
                j--;
        }

        QPoint p2(0, 0);

        if(i >= 8)
            p2 = QPoint(aux[1], 1000);
        else if(i < 0)
            p2 = QPoint(aux[1], 0);
        else if(j >= 10)
            p2 = QPoint(1200, aux[2]);
        else if(j < 0)
            p2 = QPoint(0, aux[2]);
        else
        {
            aux = tab[i][j]->hit(k);
            p2 = QPoint(aux[1], aux[2]);
            k = aux[0];
        }

        QLine l(p1, p2);
        linhas.push_back(l);
    }

    if(i >= 0 and i < 8 and j >= 0 and j < 10 and k == -1)
        H = {i, j};
}

void tabuleiro::vez()
{
    geraLinhas();

    if(turn)
    {
        QPixmap v(":/imagens/vermelho");
        label->setPixmap(v);
    }
    else
    {
        QPixmap a(":/imagens/azul");
        label->setPixmap(a);
    }

    turn = !turn;
}

void tabuleiro::keyPressEvent(QKeyEvent *event)
{
    if(S) // Modo selecão
    {
        int i = (fila[0].second-65)/110;
        int j = (fila[0].first-55)/110;

        try
        {
            tab[i][j]->rotate(event->key());
            vez();
        }
        catch(int erro) {}

        S = false;
        fila.clear();
        free.clear();
        update();
        ganha();
    }
}

void tabuleiro::ganha()
{
    if(H.first != -1 and tab[H.first][H.second]->tipo() == "FA")
    {
        janelaVitoria *j = new janelaVitoria(false, this);
        j->show();
    }
    if(H.first != -1 and tab[H.first][H.second]->tipo() == "FV")
    {
        janelaVitoria *j = new janelaVitoria(true, this);
        j->show();
    }
}
