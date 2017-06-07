#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QMouseEvent>
#include "Minion1.h"
#include <QKeyEvent>
#include "Minion2.h"
#include <Enemy1.h>
#include<QPushButton>

class Game: public QGraphicsView{
    Q_OBJECT
public:
    // member functions
    Game();
    void mousePressEvent(QMouseEvent *event);

    int id;
    void final_win();
    void final_lose();

    // member attributes
    QGraphicsScene * scene;
    QGraphicsScene * scenewin;
    QGraphicsScene * scenelose;
    QGraphicsScene * test1;

    QPushButton * button;
    QPushButton * button1;
    QPushButton * button2;
    QPushButton * button3;
    QPushButton * button4;
    QPushButton * button10;
    QPushButton * button20;
    QPushButton * button30;
    QPushButton * button40;
    static int a;
    static int b;
public slots:
    void test();
    void chose1();
    void chose2();
    void chose3();
    void chose4();
    void choose1();
    void choose2();
    void choose3();
    void choose4();
};



#endif // GAME_H
