#ifndef ENEMYTOWER3_H
#define ENEMYTOWER3_H
#include<QGraphicsPixmapItem>
#include<QGraphicsPolygonItem>
#include<QGraphicsItem>
#include<QPointF>
#include<QObject>

class enemyTower3: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT

public:
    enemyTower3 (QGraphicsItem * parent=0);

    QGraphicsPolygonItem * attack_area;

    QPointF attack_dest;

    double distance_to(QGraphicsItem * item);

    void attack_target();
    bool target_exist ;
    int hp;
    ~enemyTower3();

public slots:
    void dead();
    void acquire_target();


};
#endif // ENEMYTOWER3_H
