#ifndef BIGRED_H
#define BIGRED_H

#include "bigdrums.h"

class BigRed :  public BigDrums
{
public:
    BigRed(QWidget * parent =0);

    static bool pressed ;
    void clear();
};



#endif // BIGRED_H
