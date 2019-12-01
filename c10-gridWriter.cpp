// c10-gridWriter.cpp

Assignment 13 - Random Number Guesser / Grid Writer
CS110B Assignment 13 - Random Number Guesser and Grid Writer


This week, we have a two part assignment, Random Number Guesser and Grid Writer.  Each part is worth 50 points for 100 total possible points.  


Part 1 - Random Number Guesser

Write a derived class of the NumberGuesser class named RandomNumberGuesser.  The derived class should override the behavior of the getCurrentGuess method.  It may also add member data and its own constructor.  It may also override the higher(), lower() and reset() methods as you see fit.

To get everyone started off on the same page I have written a NumberGuesser class.  It is defined entirely in-line in the following file: NumberGuesser.h

In the current NumberGuesser class the getCurrentGuess() method returns the midpoint of the range of possible values.  In your RandomNumberGuesser class the getCurrentGuess() method should return a randomly generated number in the range of possible values.

Note that repeated calls to getCurrentGuess() should always return the same value for both classes if neither the higher() or the lower() methods are called. Consider the following example:

NumberGuesser *ng = new NumberGuesser(1, 10);

cout << ng->getCurrentGuess();

cout << ng->getCurrentGuess();

cout << ng->getCurrentGuess();

Each invocation of getCurrentGuess should return 5. This value does not change until the higher() or lower() method is invoked.

Now consider a RandomNumberGuesser example.  The first invocation of getCurrentGuess() should return a random number between 1 and 10, inclusive. Each subsequent call to getCurrentGuess() should return the same number, until higher() or lower() is invoked, at which point a new random number within the new range should be generated.  For example:

NumberGuesser *ng = new RandomNumberGuesser(1, 10);


// picks a random number between 1 and 10, let’s say it is 3, and outputs it.

cout << ng->getCurrentGuess();


// this line prints out 3 again, because it is still the current guess

cout << ng->getCurrentGuess();


// this line changes low to 4 because we now know the number is higher than 3.

// high remains unchanged at 10.

ng->higher();


// this line picks a random number between 4 and 10 and prints it out,

// let’s say it is 9

cout << ng->getCurrentGuess();


// this line prints out 9 again, because it is still the current guess

cout << ng->getCurrentGuess();


Make careful note of how the word “virtual” is used in NumberGuesser.h!  


Part 2 - Grid Writer

In this part of the assignment you will not need to write any code. Instead you will download a software project and submit your answers to questions about the code.


The project uses a class named GridWriter to display circles and rectangles in a text grid.  The GridWriter class is a collection type class similar to an IntCollection.  It stores Circle and Rectangle objects that inherit from a base class named Shape.


The GridWriter class has a member function named display that accepts a row count and column count as arguments, and prints out a text grid that shows the shapes that it stores.

Consider the main function below. It creates a GridWriter, adds some shapes, and then displays a grid:

int main() {

   

        GridWriter gw;

   

        // Add some circles...

        gw.add(new Circle(10, 10, 9));

        gw.add(new Circle(25, 20, 12));

        gw.add(new Circle(25, 20, 5));

   

        // Add a rectangle...

        gw.add(new Rectangle(40, 0, 10, 10));

   

        // Display the grid with 40 rows and 50 columns

        gw.display(40, 50);

}

The console output will look like this:

. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . . . . . . . . . . 1 . . . . . . . . . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . .

. . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1 2 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . .

. . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 . . . . . . . . . . . . .

. . . . . . . . . . . . . . 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 . . . . . . . . . . . . .

. . . . . . . . . . . . . . 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 . . . . . . . . . . . . .

. . . . . . . . . . . . . . 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 . . . . . . . . . . . . .

. . . . . . . . . . . . . 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 . . . . . . . . . . . .

. . . . . . . . . . 1 . . . 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 . . . . . . . . . . . . .

. . . . . . 1 1 1 1 1 1 1 1 2 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 . . . . . . . . . . . . .

. . . . . 1 1 1 1 1 1 1 1 1 2 2 1 1 1 1 1 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 . . . . . . . . . . . . .

. . . . 1 1 1 1 1 1 1 1 1 1 2 2 2 1 1 1 1 1 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 . . . . . . . . . . . . .

. . . 1 1 1 1 1 1 1 1 1 1 1 1 2 2 2 1 1 1 1 1 1 1 2 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . .

. . 1 1 1 1 1 1 1 1 1 1 1 1 1 2 2 2 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . .

. . 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 2 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . .

. . 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . . .

. . 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . . . .

. 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . 1 1 1 1 1 1 1 1 1 1

. . 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . 1 1 1 1 1 1 1 1 1 . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1

. . 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . 1 . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1

. . 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1

. . 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1

. . . 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1

. . . . 1 1 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1

. . . . . 1 1 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1

. . . . . . 1 1 1 1 1 1 1 1 1 . . . . . . . . . . . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1

. . . . . . . . . . 1 . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1

. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 1 1 1 1 1 1 1 1 1 1


The code in the main function adds three Circle objects and one Rectangle object to the GridWriter. See if you can find the shapes in the output.


The Shape class defines x and y.  Both the circle and the rectangle class inherit these instance variables.  Similarly, the Shape class defines the getArea and containsPoint member functions, and the circle and rectangle inherit them.  The circle and rectangle classes extend the Shape class by adding radius or height and width.


Download the GridWriter.zip file and examine the classes. Carefully read through the code and note any statements that you do not understand. When you are comfortable with the code, answer the following questions. Submit your answers in a text file.


1.  The two argument constructor of the Shape class contains this code:

this->x = x;

      this->y = y;

Why is it necessary to put  “this->” in front of x and y?  If you are not sure then remove these lines and see if it changes the output, which may provide you a hint why it is necessary.  Note: the answer to this question is not what happens if you remove "this->" but why do you need it.


2.  In the containsPoint member function of Circle, why are this->x and this->y in scope, even though they are not defined as member variables in Circle.h?


3.  What is the purpose of the keyword “virtual” in front of Shape::containsPoint and Shape::getArea?  What is the purpose of the “ = 0”?


4.  In Circle.cpp the three argument Circle constructor is defined like this:

Circle:: Circle(int x, int y, int radius) : Shape(x, y) {

this->radius = radius;

      }


What is the purpose of the “: Shape(x, y)” (shown in bold in the code above). What happens if you remove it?


5.  List an example of polymorphism that you can find in the code base.  That is to say, list a statement where the datatype of a reference or pointer is not an exact match with the datatype of the object that it refers to.  




What to submit?


Create a zip file containing three files; 2 files for part 1, and 1 file for part 2:

Part 1 - Random Number Guesser

Submit your RandomNumberGuesser.h and RandomNumberGuesser.cpp files.  You do not need to submit sample output.


Part 2 - Grid Writer


Submit your answers to the GridWriter questions in a plain text file, e.g. GridWriter.txt.


Reminder: no late homework submissions will be accepted after Thursday, 12/12 at 11:59pm, so make sure to submit before that.

