#include <iostream>
#include "brett.h"
using namespace std;

int main()
{
    Brett brett;
    brett.visBrett();
    char fra[2] = {0,5};
    char til[2] = {0,5};
    brett.flyttKonge(fra, til);
    return 0;
}
