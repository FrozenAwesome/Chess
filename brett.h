#ifndef BRETT_H
#define BRETT_H

#include <iostream>

class Brett
{
public:
    Brett();
    void visBrett();
private:
    char brett[8][8];
    void nyttBrett();
};

#endif // BRETT_H
