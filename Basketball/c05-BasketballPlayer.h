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