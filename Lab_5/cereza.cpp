#include "cereza.h"

cereza::cereza(QGraphicsItem *car): QGraphicsPixmapItem(car)
{
    setPixmap(QPixmap(":/images/cereza.png").scaled(23,23));
}

void cereza::cerezapos(int xx, int yy)
{
    setPos(xx,yy);
}
