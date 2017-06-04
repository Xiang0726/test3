#ifndef ENEMYTOWER2_H
#define ENEMYTOWER2_H
#include<QGraphicsPixmapItem>
#include<QGraphicsPolygonItem>
#include<QGraphicsItem>
#include<QPointF>
#include<QObject>

class enemyTower2: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT

public:
    enemyTower2 (QGraphicsItem * parent=0);

    QGraphicsPolygonItem * attack_area;

    QPointF attack_dest;

    double distance_to(QGraphicsItem * item);

    void attack_target();
    bool target_exist ;
    int hp;
    ~enemyTower2();

public slots:
    void dead();
    void acquire_target();


};

#endif // ENEMYTOWER2_H
