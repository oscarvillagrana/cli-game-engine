// c05-Player.h
// Oscar Villagrana
#include <string>

class Player{

private:
    string name;
    int height;
    int weight;
public:
    Player();
    Player(string n, int h, int w);
    virtual void printStats() const = 0;
}