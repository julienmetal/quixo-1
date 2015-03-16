#include <QApplication>
#include "quixo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Quixo w;
    w.show();
    
    return a.exec();
}
