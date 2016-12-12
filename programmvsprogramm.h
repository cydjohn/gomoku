#ifndef PROGRAMMVSPROGRAMM_H
#define PROGRAMMVSPROGRAMM_H
#include"board.h"

class ProgrammVsProgramm:public Board
{
public:
    ProgrammVsProgramm();

    void competiton();
    virtual void mouseReleaseEvent(QMouseEvent *ev);

    void computerPlaceChess();
    void AI(int *p, int *q,int side);
    int positionValue(int row, int col,int side) ;
    int chessType(int n, int p, int q,int side) ;
    void goStep(int n, int *i, int *j);
};

#endif // PROGRAMMVSPROGRAMM_H
