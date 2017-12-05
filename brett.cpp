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
        brett[1][i] = SVART_BONDE;
        brett[6][i] = HVIT_BONDE;
    }
    brett[0][2] = SVART_LOPER;
    brett[0][5] = SVART_LOPER;
    brett[0][4] = SVART_KONGE;
    brett[7][2] = HVIT_LOPER;
    brett[7][5] = HVIT_LOPER;
    brett[7][4] = HVIT_KONGE;

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
    nummer = 8;
    int letters = 97;
    std::cout << "\n |";
    for (int i = 0; i < 8; ++i) {
        std::cout << static_cast<char>(letters+i) << "|";
        nummer--;
    }
    std::cout << "\n";
}
bool Brett::flyttKonge(char fra[2], char til[2]){
    unsigned char bokstav = fra[0];
    unsigned char tall = fra[1];
    if(brett[bokstav][tall] == SVART_KONGE){
        //Flytter kongen
        std::cout << "Funker\n";
        return true;
    }else{
        std::cout << "Funker ikke!";
        return false;
    }
    return false;
}
