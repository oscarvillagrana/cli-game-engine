// Exercise 2A: Oscar Villagrana
// This program prints out as many asterisks as the user wants.


#include <iostream>
using namespace std;

int home_team = 0;
int away_team=0;

int main()

{
  char goAgain = 'y';
  while (goAgain != 'n')

  {
    std::cout << "What is score for the home team? ";
    std::cin >> home_team;
    {
      if (home_team <= 0 && home_team >= 1000)
      {
        std::cout << "Thats crazy, whats the real score? ";
      }
      else
        cin >> home_team;
      return 0;
    }
    std::cout << "What is the score for the away team? ";
    std::cin >> away_team;
    std::cout << "The home team score was: " << home_team;
    std::cout << "The away team score was: " << away_team;
    {
      if (home_team < away_team)
      std::cout << "Away team won the game";
      else
        cout << "Home team wone the game";
    }

    std::cout << "Go again? (y/n): ";
    std::cin >> goAgain;
  }
}
