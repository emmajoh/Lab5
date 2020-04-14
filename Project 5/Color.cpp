/**
 * Color.cpp
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

#include "Color.h"

int Color::checkRange(int val) {
    if ((val >= 0) && (val <= 255)) {
        return val;
    }
    else if (abs(0 - val) > abs(255 - val)) {
        return 255;
    }
    else if (abs(0 - val) < abs(255 - val)) {
        return 0;
    }
}

Color::Color() {
    red = 0;
    blue = 0;
    green = 0;
}

Color::Color(int redVal, int greenVal, int blueVal) {
    red = checkRange(redVal);
    green = checkRange(greenVal);
    blue = checkRange(blueVal);
}

void Color::setRed(int redVal) {
    red = checkRange(redVal);
}

int Color::getRed() {
    return red;
}

void Color::setGreen(int greenVal) {
    green = checkRange(greenVal);
}

int Color::getGreen() {
    return green;
}

void Color::setBlue(int blueVal) {
    blue = checkRange(blueVal);
}

int Color::getBlue() {
    return blue;
}

void Color::read(istream& ins) {
    //finish
}

void Color::write(ostream& outs) {
    cout << red << " " << green << " " << blue;
}


// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins, Color& color)
{
   color.read(ins);
   return ins;
}

ostream& operator << (ostream& outs, Color color)
{
   color.write(outs);
   return outs;
}
