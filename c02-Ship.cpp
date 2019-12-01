//
//  Ship.cpp
//  Battleship
//

#include "Ship.h"

//*******************************************************************************************
// Constructor
//*******************************************************************************************

Ship::Ship(point originPoint, direction o, int l) 
{
    length = l;
    orientation = o;
    origin = originPoint;
    
    // Are these already constructed if I dont initialize them here?
    // PointCollection points;
    // PointCollection hits;
}

//*******************************************************************************************
// A copy constructor
//*******************************************************************************************

Ship::Ship(const Ship& s) 
{
    *this = s;
}

//*******************************************************************************************
// Contains Point
//*******************************************************************************************

// Returns true if a Ship covers a point p on the board, false if it does not.
bool Ship::containsPoint(const point& p) const
{
    if (orientation = HORIZONTAL && p.getY() == origin.getY())
        
        // test
        // cout << origin.getX() << endl;

        for (i = origin.getX(); i<length; i++)

            if (p.getX() == origin.getX())
                return true;
        
    if (orientation = VERTICAL && p.getX() == origin.getX())
        
        // test
        // cout << origin.getY() << endl;

        for (i = origin.getY(); i<length; i++)

            if (p.getY() == origin.getY())
                return true;

    return false;
}

//*******************************************************************************************
// Collides With
//*******************************************************************************************

// Returns true if the receiving ship shares a point with the argument ship, false if not.  Collides with it, so to speak.  
bool Ship::collidesWith(const Ship& s) const
{
	if (orientation = HORIZONTAL && s.origin.getY() == origin.getY())
        
        // test
        // cout << origin.getX() << endl;

        for (i = origin.getX(); i<length; i++)

            if (s.origin.getX() == origin.getX())
                return true;
        
    if (orientation = VERTICAL && s.origin.getX() == origin.getX())
        
        // test
        // cout << origin.getY() << endl;

        for (i = origin.getY(); i<length; i++)

            if (s.origin.getY() == origin.getY())
                return true;

    return false;
}

//*******************************************************************************************
// Shot Fired At Point
//*******************************************************************************************


// This is a verb in the game.  When the user enters a coordinate, this method can be called on each ship.  If the ship contains the point, it should remember that it has been hit at that point.  It can do this with a second hits PointCollection.
void Ship::shotFiredAtPoint(const point& p)
{

}

//*******************************************************************************************
// Is Hit At Point
//*******************************************************************************************

// Returns true if shotFiredAtPoint() has been called for point p in the ship.  False if it has not, or if the point is not in the ship.

bool Ship::isHitAtPoint(const point& p)
{
    return false;
}

//*******************************************************************************************
// Hit Count
//*******************************************************************************************

// Returns the number of points in the ship that have been hit.  When the hitCount is equal to the length of the ship the ship is considered to be sunk.

int Ship::hitCount() const
{
    return 0;
}

//*******************************************************************************************
// Operator =
//*******************************************************************************************

// The assignment operator.
const Ship& Ship::operator=(const Ship& s)
{
	return *this;
}


//*******************************************************************************************
//  Is Sunk
//*******************************************************************************************

// Returns true if the ship is sunk.
bool Ship::isSunk() 
{
	return false;	
}











