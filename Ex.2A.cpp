// Exercise 2A: Oscar Villagrana
// This program prints out the winner of the game


#include <iostream>
using namespace std;

int home_team = 0;
int away_team=0;

int main()

{
  char goAgain = 'y';
  while (goAgain != 'n')

  {
    std::cout << "What is the score for the home team? " << std::endl;
    std::cin >> home_team;
    {
      if (home_team <= 0 || home_team >= 1000)
      {
        std::cout << "Thats crazy!" << std::endl;
        std::cout << "What is the REAL score for the home team? " << std::endl;
        cin >> home_team;
      }
    }

    std::cout << "What is the score for the away team? " << std::endl;
    std::cin >> away_team;
    {
      if (away_team <= 0 || away_team >= 1000)
      {
        std::cout << "Thats crazy!" << std::endl;
        std::cout << "What is the REAL score for the away team? " << std::endl;
        cin >> away_team;
      }
    }

    std::cout << "The home team score was: " << home_team << std::endl;
    std::cout << "The away team score was: " << away_team << std::endl;

    if (home_team < away_team)
      {
        if (home_team == away_team)
          {
          std::cout << "Tied game" << std::endl;    
          }
      }    
      
      std::cout << "Away team won the game" << std::endl;

    else
      std::cout << "Home team won the game" << std::endl;
    

    std::cout << "Go again? (y/n): " << std::endl;
    std::cin >> goAgain;
  }
}
