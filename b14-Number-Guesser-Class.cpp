// b14-Number-Guesser-Class.cpp

CS110B Assignment 10: Number Guesser Class

For this assignment you will write up code for the same number guessing game you implemented in a previous assignment, in which the user picks a number, and your program tries to guess the number.  Each time that the program guesses a number the user responds by telling the program either the correct answer is higher or lower, or that the program’s guess is correct.


A sample run of the program is printed below. In the example the user picks the value 72 for the first game, and then 25 for the second game. The user's input is in bold. Here is how the output might look:

> Think of a number between 1 and 100

> Is the number 50? (h/l/c): h

> Is the number 75? (h/l/c): l

> Is the number 62? (h/l/c): h

> Is the number 69? (h/l/c): h

> Is the number 72? (h/l/c): c

> You picked 72? Great pick.

> Do you want to play again? (y/n): y

> Think of a number Between 1 and 100

> Is the number 50? (h/l/c): l

> Is the number 25? (h/l/c): c

> You picked 25? Great pick.

> Do you want to play again: (y/n): n

> Goodbye.

Notice that the program is guessing numbers, and the user is responding by entering 'h', 'l', or 'c' for higher, lower, or correct.


The point of interest for us is not necessarily the game - which we have already implemented in a previous assignment - but rather the design of the program.  The essential part of this assignment is writing a NumberGuesser class.  This class will contain all of the logic for remembering the current state of the program’s guesses.  


When a new instance of a NumberGuesser class is created the upper and lower bounds of the possible values should be passed into its constructor.  From that point on, a NumberGuesser object will always return the midpoint of the possible values when the getCurrentGuess() member function is called.  If the higher() or lower() member functions are called, the NumberGuesser object should adjust its private variables to represent the new possible range of values.  


For example, if a NumberGuesser is created with the following line of code then the range will be the numbers from 1 to 100:


NumberGuesser guesser(1, 100);


If the getCurrentGuess() method is called it should return 50, which is the midpoint between 1 and 100.  If the higher() method is then called, the object should adjust its state accordingly so that it knows that the correct value is now between 51 and 100, inclusive, and getCurrentGuess() would now return 75, the midpoint between 51 and 100.  If the lower() method is then called, it should adjust its state to represent that the possible values are now between 51 and 74, and getCurrentGuess() should return 62, the midpoint between 51 and 74.  By following this strategy the number guesser should be able to eventually guess the proper value that the user guessed.


As another example, here a different NumberGuesser is created with range between 25 and 35:


NumberGuesser littleGuesser(25, 35);

littleGuesser.getCurrentGuess(); // should return 30

littleGuesser.higher();          // adjusts range to 31-35

littleGuesser.getCurrentGuess(); // should return 33

littleGuesser.reset();           // reset range back to original

                                 // range between 25-35

littleGuesser.getCurrentGuess(); // should return 30



Here is the basic design of the NumberGuesser class that you should write. The private data variables have been left up to you.


NumberGuesser Class

Private Data

??

Public Member Functions and Constructors

NumberGuesser();

NumberGuesser(int lowerBound, int upperBound);

void higher();

void lower();

int getCurrentGuess();

void reset();


The reset() method should return a NumberGuesser object to the state that it was in when it was constructed, i.e. with its original lowerBound and upperBound reset back to their original values.  This allows reusing this same NumberGuesser object to play a new game.  


Write your NumberGuesser class and test it until you are sure that it is working properly.  After it is working, write the rest of the program so that it plays the game by using an instance of your NumberGuesser class.


Note: Your NumberGuesser class should not contain any cin or cout statements.  It is only responsible for handling the indicated methods.  All of the input and output work should be handled elsewhere in your program.


What to submit?


You should create three files:

NumberGuesser.h: NumberGuesser class definition

NumberGuesser.cpp: NumberGuesser class implementation

main.cpp: main program to run the game using your NumberGuesser class, including sample output at the bottom


When you are finished, create a zip file containing these three files, and submit the zip file via Canvas.  Do not submit the three files separately.

