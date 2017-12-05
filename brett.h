#ifndef BRETT_H
#define BRETT_H

#include <iostream>

class Brett
{
public:
    Brett();
    void visBrett();
    bool flyttKonge(char fra[2], char til[2]);
private:
    char brett[8][8];
    void nyttBrett();

    const char SVART_BONDE = 'b';
    const char SVART_KONGE = 'k';
    const char SVART_LOPER = 'l';

    const char HVIT_BONDE = 'B';
    const char HVIT_KONGE = 'K';
    const char HVIT_LOPER = 'L';

};

#endif // BRETT_H
