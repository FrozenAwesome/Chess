#include "brett.h"

Brett::Brett()
{
    nyttBrett();
}

void Brett::nyttBrett(){
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            brett[i][j] = ' ';
        }
    }
    for (int i = 0; i < 8; ++i) {
        brett[1][i] = 'b';
        brett[6][i] = 'B';
    }
    brett[0][2] = 'l';
    brett[0][5] = 'l';
    brett[0][4] = 'k';
    brett[7][2] = 'L';
    brett[7][5] = 'L';
    brett[7][4] = 'K';
}

void Brett::visBrett(){
    int nummer =  8;
    for (int i = 0; i < 8; ++i) {
        std::cout << "\n" << nummer << "|";
        nummer--;
        for (int j = 0; j < 8; ++j) {
            std::cout << brett[i][j] << "|";
        }
    }
}
bool flyttKonge(char fra[2], char til[2]){

}
