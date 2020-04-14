/**
 * test.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183, Winter 2020
 * Project 5: CoolPics
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * Contains functions for testing classes in the project. 
 */

#include "Graphics.h"
#include "Circle.h"
#include "Color.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"

#include <iostream>
#include <fstream>

using namespace std;

void test_Circle();
void test_Color();
void test_Graphics();
void test_Line();
void test_Point();
void test_Triangle();
void test_Rectangle();


void startTests() {
    test_Point();
    test_Color();
    test_Graphics();
  test_Line();
  test_Rectangle();
    test_Triangle();
  test_Circle();
}

void test_Point() {
    // test of default constructor
    cout << "Testing default Constructor" << endl;
    Point p1;
    cout << p1 << endl;
    
    // test of the non-default constructor
    cout << "Testing non default Constructor" << endl;
    Point p2(3, 9);
    cout << p2 << endl;

    // test of member function: setX()
    p1.setX(5);
    // test of member function: setY()
    p1.setY(3);

    // test of member functions getX() and getY()
    cout << "( " << p1.getX()
         << ", " << p1.getY()
         << " )" << endl;
    
    // you can also do cin >> p1;
    p1.read(cin);
    cout << p1 << endl;
    
    return;
}

void test_Color() {
    cout << "Testing Class Color" << endl;
    cout << "Testing default constructor" << endl;
    Color colorDefault;
    cout << colorDefault << endl;
    return;
}

void test_Graphics() {
    cout << "Testing Graphics Class" << endl;
    cout << "Testing default constructor" << endl;
    Graphics graphicsDefault;
    //print
    return;
}

void test_Line() {
    cout << "Testing Line Class" << endl;
    cout << "Testing default constructor" << endl;
    Line lineDefault;
    //print
    return;
}



void test_Rectangle() {
    cout << "Testing rectangle class" << endl;
    cout << "Testing default constructor" << endl;
    //print
    return;
}


void test_Triangle() {
    cout << "Testing triangle class" << endl;
    cout << "Testing default constructor" << endl;
    Triangle triangledefault;
    //print
    return;
}

void test_Circle() {
    cout << "Testing circle class" << endl;
    cout << "Testing default constructor" << endl;
    Circle defaultCircle;
}



