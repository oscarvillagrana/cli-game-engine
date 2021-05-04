// c02-Battleship.cpp

/*
CS110B Assignment 12: Battleship

// In 1967, Hasbro Toys introduced a children’s game named “Battleship.”  Over the course of two assignments you will be creating a one-player version of the game.

// The game is simple.  Each player arranges a fleet of ships in a 10x10 grid.  The grid is hidden from the opponent.  Here is an example text representation of a 10x10 grid.  The ‘O’s represent ships, the ‘~’s represent empty water.  There are three ships in the example:

A vertical ship with a length of 3, at point (2, 1)
A vertical ship with a length of 2, at point (3,5)
A horizontal ship with a length of 4, at point (5,3)
9 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

8 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

7 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

6 ~  ~  ~  O  ~  ~  ~  ~  ~  ~

5 ~  ~  ~  O  ~  ~  ~  ~  ~  ~

4 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

3 ~  ~  O  ~  ~  O  O  O  O  ~

2 ~  ~  O  ~  ~  ~  ~  ~  ~  ~

1 ~  ~  O  ~  ~  ~  ~  ~  ~  ~

0 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

  0  1  2  3  4  5  6  7  8  9


To play the game, the players take turns guessing where their opponent's ships are located. On each run they guess one coordinate point. This is referred to as an imaginary “shot” at this location. The opponent tells them whether the shot is a hit or a miss.  The first player to hit every point that is covered by an opponent’s ship wins.

If you are not familiar with the game, you should start out by reading the Wikipedia article, and spending some time playing a fancy version of the game at Pogo.com. See the links below:

Wikipedia’s Battleship Article

Pogo.com’s Gabbleship Game



// Your assignment this week will be to work on the data structures for the game. We will be using four classes to represent the game entities: point, PointCollection, Ship, and Board.  

// The point and PointCollection classes have already been written for you.  
// The Ship class has been designed, and the member functions have been written as stubs.  
// The Board class has not yet been designed or implemented.  
// Download the beginning code for the project by clicking here: Battleship.zip

The One Player Game

We will be writing a one player version of the Battleship game in which the computer randomly places four ships of lengths 2-5, and the user tries to sink the ships.  The program will be written over the course of two assignments.  You do not need to write the complete game this week.

In the sample run of the program below, the grid is first displayed as empty.  All of the ships are hidden.  The player enters coordinates by entering two integer values separated by a space.  Hits are shown on the map with an ‘X’.  Misses are shown with a ‘.’.  The ‘.’ character represents a small splash.  Feel free to replace this, it is the best that I could think of.

Welcome to Battleship.

9 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

8 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

7 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

6 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

5 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

4 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

3 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

2 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

1 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

0 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

  0  1  2  3  4  5  6  7  8  9

Enter a coordinate: 4 7

Hit!

9 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

8 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

7 ~  ~  ~  ~  X  ~  ~  ~  ~  ~

6 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

5 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

4 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

3 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

2 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

1 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

0 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

  0  1  2  3  4  5  6  7  8  9

Enter a coordinate: 5 6

Miss.

9 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

8 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

7 ~  ~  ~  ~  X  ~  ~  ~  ~  ~

6 ~  ~  ~  ~  ~  .  ~  ~  ~  ~

                 . 

5 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

4 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

     .  .  .  .  .

3 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

2 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

1 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

0 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

  0  1  2  3  4  5  6  7  8  9

Enter a coordinate:


When the user sinks a ship, the game should say: “you sank a ship with length 2!” where 2 is replaced by the length of the ship that was sunk.  When all four ships are sunk, the game should end.




This week you will begin the project by completing the Ship class, and writing up some design ideas for the Board class.


Point and PointCollection Classes: Two classes have already been written and tested for you.  
The Point class, which stores a single point, and the PointCollection class which dynamically stores a collection of points.  
The PointCollection class is similar to the IntCollection class you wrote for a previous assignment.  
Take a close look at these classes, and think of how you can take advantage of the functions already written for you.  
We will NOT be using a 2-dimensional array to store the data for the battleship board.  
We will store the location of each ship using a collection of point objects.  
We will also use point objects to store all of the shots that count as misses.



Ship Class: The .h file for the ship class has already been written.  The member functions in Ship.h all have empty stubs in Ship.cpp.  
You can complete the Ship class by filling these stubs in with the necessary logic.

The Ship class has the following member constructors and member functions:

Ship(point originPoint, direction orientationDirection, int lengthValue) - this constructor accepts the origin or the ship (its lowest, leftmost point), 
its length
its orientation (horizontal or vertical).  
It should use this information to fill in its PointCollection.


Ship(const Ship&) -  A copy constructor.


bool containsPoint(const point& p) const  -  Returns true if a Ship covers a point p on the board, false if it does not.


bool collidesWith(const Ship& s) const -  Returns true if the receiving ship shares a point with the argument ship, false if not.  Collides with it, so to speak.  


void shotFiredAtPoint(const point& p) -  This is a verb in the game.  When the user enters a coordinate, this method can be called on each ship.  If the ship contains the point, it should remember that it has been hit at that point.  It can do this with a second hits PointCollection.


bool isHitAtPoint(const point& p) -  Returns true if shotFiredAtPoint() has been called for point p in the ship.  False if it has not, or if the point is not in the ship.


int hitCount() const  - Returns the number of points in the ship that have been hit.  When the hitCount is equal to the length of the ship the ship is considered to be sunk.


const Ship& operator=(const Ship& s) - The assignment operator.


bool isSunk()  -  Returns true if the ship is sunk.


Board Class: The Board class has not been written yet.  If this class is well designed, then it should be easy to write the rest of the game.  


You will be submitting a written description of your thoughts on the Board class. 
The most important part of this is a list of member data, member functions, and constructors that the class would have, and your thoughts on how a program with a user interface would use them.  
Your write up can consist of a few sentences and some bullet points.  
There is no need to spend too much time on this.


Testing

Currently, the main() function in main.cpp calls a series of tests to determine if various functions work correctly.  If you compile as is, tests will fail.  This is expected because the Ship class member functions haven’t yet been implemented and are simple stub functions!  When you’ve correctly implemented your Ship class, these tests (at a minimum) must all pass.


For this week, leave all of the tests in main.cpp.  When you eventually implement the Board class in a later assignment, you will replace the tests with your program that runs the game.


How to compile?

If you put the code into its own directory on hills, you can compile the code with the following command: g++ *.cpp.  If you are using an Integrated Development Environment (IDE) then you can import the code into a project and build.  


What to submit?

Submit two files: your completed Ship.cpp file, and a text file containing a writeup on your design for a Board class.  This week, there is no need for a sample output file.  I must be able to take your Ship.cpp file, replace the one in Battleship.zip with it, and compile and run on hills.  No credit will be given for submissions which do not compile on hills in this fashion.

*/