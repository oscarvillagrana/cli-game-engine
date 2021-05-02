
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

// c05-BasketballPlayer.h

class BaseballPlayer {

private:    
    int atBats;
    int hits;
public:
    BaseballPlayer();
    BaseballPlayer(int h, int w, int bats, int hits);
    void printStats();
}

void printStats(){
    cout << name << endl;
    cout << height << endl;
    cout << weight << endl;
    cout << atbats << endl;
    cout << hits << endl;
    cout << battingAverage() << endl;

}


battingAverage(){
    return hits / atbats;
} 

// c05-ex13C-BballPlayer

#include <iostream>
// #include <c05-Player.h>
// #include <c05-BasketballPlayer.h>
// #include <c05-BaseballPlayer.h>


main() {
    BaseballPlayer p1("Michael", 5, 190, 70, 90);
    BasketballPlayer p2("Steve", 10, 170, 50, 60);
}
