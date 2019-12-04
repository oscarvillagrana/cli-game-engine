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

    // add origin to collection
    points << origin;
    // points.add(origin);
    
    // check if point meets orientation requirements to find points
    if (orientation == HORIZONTAL) {

        // loop through the length of the ship
        for (int i = 1; i<length; i++) {

            // generate new point
            point newPoint(origin.getX() + i, origin.getY());

            // add point to collection
            points << newPoint;
            // points.add(newPoint);
        }
    }
        
    // check if point meets orientation requirements to find points
    if (orientation == VERTICAL) {

        // loop through the length of the ship
        for (int i = 1; i<length; i++) {

            // generate new point
            point newPoint(origin.getX(), origin.getY() + i);

            // add point to collection
            points << newPoint;
            // points.add(newPoint);
        }
    }

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
    // check if point meets orientation requirements to find points
    if (orientation == HORIZONTAL && p.getY() == origin.getY())

        // loop through the length of the ship
        for (int i = origin.getX(); i<length; i++)

            // check if contains point
            if (i == p.getX())
                return true;
        
    // check if point meets orientation requirements to find points
    if (orientation == VERTICAL && p.getX() == origin.getX())

        // loop through the length of the ship
        for (int i = origin.getY(); i<length; i++)

            // check if contains point
            if (i == p.getY())
                return true;

    return false;
}

//*******************************************************************************************
// Collides With
//*******************************************************************************************

// Returns true if the receiving ship shares a point with the argument ship, false if not.  Collides with it, so to speak.  
bool Ship::collidesWith(const Ship& s) const
{
    // check if point meets orientation requirements to find points
	if (orientation == HORIZONTAL && s.origin.getY() == origin.getY())

        // loop through the length of the ship
        for (int i = origin.getX(); i<length; i++)

            // check if contains point
            if (s.origin.getX() == origin.getX())
                return true;
    
    // check if point meets orientation requirements to find points
    if (orientation == VERTICAL && s.origin.getX() == origin.getX())

        // loop through the length of the ship
        for (int i = origin.getY(); i<length; i++)

            // check if contains point
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

    // TODO:
    // need to create a new hits instance
    // so ship can remember hits
    // should make it global?

    if (containsPoint(p))
    {
        hits.add(p);
    } 

    // if no, we can ignore it
    // else 
    // {
    //     points.add(p);
    // }
}

//*******************************************************************************************
// Is Hit At Point
//*******************************************************************************************

// TODO:
// need to remove the possibility of sinking ship by hitting same spot lenght many times

// Returns true if shotFiredAtPoint() has been called for point p in the ship.  False if it has not, or if the point is not in the ship.

bool Ship::isHitAtPoint(const point& p)
{
    if (hits.contains(p))
        return true;
    return false;
}

//*******************************************************************************************
// Hit Count
//*******************************************************************************************

// Returns the number of points in the ship that have been hit.  
// When the hitCount is equal to the length of the ship the ship is considered to be sunk.

int Ship::hitCount() const
{

    // // I dont think it needs to iterate to get count

    // int count = 0;

    // for (int i = 0; i < hits.getSize(); i++) {
    //     if (hits.get(i) == p) {
    //         count += 1;
    //     }
    // }

    // return count;

    return hits.getSize();
    
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

    if (hitCount() == length)
        return true;

	return false;	
}