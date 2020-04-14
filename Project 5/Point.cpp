/**
 * Point.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183, Winter 2020
 * Project 5: CoolPics
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#Description#>
 */

#include "Point.h"
#include <cmath>

// for the declaration of DIMENSION
#include "utility.h"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int xVal, int yVal) {
    x = xVal;
    y = yVal;
}

void Point::setX(int xVal) {
    x = xVal;
    return;
}

int Point::getX() {
    return x;
}

void Point::setY(int yVal) {
    y = yVal;
}

int Point::getY() {
    return y;
}

/*

void Point::read(istream& ins) {
    string input;

    //string of xcoord
    string xCoord = "";
    //string of ycoord
    string yCoord = "";

    //flag that xcoord is done
    int flagOne = 0;

    //disposes of , ()
    char junk = 'l';

    ins >> input;

    for (int i = 0; i < input.size(); i++) {
        if (input.at(i) == '(') {
            junk = input.at(i);
        }
        else if (input.at(i) == ')') {
            junk = input.at(i);
            return;
        }
        else if (flagOne == 1) {
            yCoord = yCoord + input.at(i);
        }
        else if (input.at(i) != ',') {
            xCoord = xCoord + input.at(i);
        }
        else if (input.at(i) == ',') {
            junk = input.at(i);
            flagOne = 1;
        }
    }
    
    for (int k = (xCoord.size() - 1); k > 0; k--) {
        x = x + (pow(10, k) * (xCoord.at(k) - 48));
    }
    for (int j = (yCoord.size() - 1); j > 0; j--) {
        y = y + (pow(10, j) * (yCoord.at(j) - 48));
    }
}
*/


void Point::read(istream& ins) {
    char junk = ' ';
    ins >> junk;
    ins >> x;
    ins >> junk;
    ins >> y;
    ins >> junk;
}
    

void Point::write(ostream& outs) {
    outs << "(" << x << "," << y << ")";
}

int Point::checkRange(int val) {
    if ((val >= 0) && (val < DIMENSION)) {
        return val;
    }
    else if (abs((DIMENSION - 1) - val) > abs(0 - val)) {
        return 0;
    }
    else if (abs((DIMENSION - 1) - val) < abs(0 - val)) {
        return DIMENSION - 1;
    }
}

// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}
