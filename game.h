#ifndef GAME_H
#define GAME_H


class Game
{
public:
    Game();
private:
    int letterToNumber(char letter){return static_cast<int>(letter)-97;}

};

#endif // GAME_H
