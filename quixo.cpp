#include "quixo.h"
#include "ui_quixo.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>

Quixo::Quixo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Quixo)
{
    ui->setupUi(this);
    QGraphicsScene * ma_scene;
    ma_scene = new QGraphicsScene();
    QGraphicsPixmapItem * mon_item;
    QPixmap * mon_image = new QPixmap(":/neutre.png");
    for(int j=0; j<5; ++j) {
        for(int i=0; i<5; ++i) {
            mon_item = new QGraphicsPixmapItem();
            mon_item->setPixmap(* mon_image);
            mon_item->setPos(i*50,j*50);
            mon_item->setScale(1.0);
            ma_scene->addItem(mon_item);

        }
    }
    ui->ma_vue->setScene(ma_scene);


}

Quixo::~Quixo()
{
    delete ui;
}

void Quixo::on_quitButton_clicked()
{
    this->close();
}
