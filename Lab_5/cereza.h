#ifndef CEREZA_H
#define CEREZA_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

class cereza : public  QObject,
        public QGraphicsPixmapItem
{
   Q_OBJECT

private:
    int x = 0;
    int y = 0;
public:
    cereza(QGraphicsItem *car=0);

    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);

    void cerezapos(int xx, int yy);
};

#endif // CEREZA_H
