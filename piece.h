#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsPixmapItem>

class Piece : public QGraphicsPixmapItem
{
public:
    enum COULEUR_PIECE {PIECE_NEUTRE=0, PIECE_ROND, PIECE_CROIX};
    explicit Piece();
    explicit Piece(COULEUR_PIECE _couleur, int16_t _x, int16_t _y);
    bool isSelectionnable();
    int16_t _x;
    int16_t _y;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);


private:
    std::vector<QPixmap *> pixmapCollection;
    COULEUR_PIECE couleur;
};

#endif // PIECE_H
