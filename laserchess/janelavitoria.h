#ifndef JANELAVITORIA_H
#define JANELAVITORIA_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QApplication>
#include <QCloseEvent>
#include "janela.h"

class janelaVitoria : public QMainWindow
{
    Q_OBJECT
    QWidget *p;
public:
    explicit janelaVitoria(bool vencedor, QWidget *parent = nullptr);
    void closeEvent(QCloseEvent *event);
signals:
public slots:
    void menu();
};

#endif // JANELAVITORIA_H
