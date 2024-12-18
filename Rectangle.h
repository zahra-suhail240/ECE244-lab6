//
//  Rectangle.h
//  Lab5
//
//  Created by Tarek Abdelrahman on 2020-11-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

#ifndef Rectangle_h
#define Rectangle_h

#include <iostream>
#include <string>
using namespace std;


// This class implements the rectangle Shape objects.
// ECE244 Student: Write the definition of the class here.

#include "Shape.h"
//Essecntially saying that the class rectangle is inherited from Shape
class Rectangle : public Shape{
    //private means these data can only be accessed within the class and not outside the class 
private:
    float width, height; 


public:

//Constructor
Rectangle( string n, float xcent, float ycent, float w, float h);

//Destructor
virtual ~Rectangle();

//Accessor
float getWidth() const;  //return width of rectangle

float getHeight() const; //return height of rectangle

//Mutator
void setWidth(float w);

void setHeight(float h);

//utility methods
virtual void draw() const; // prints the information of the rectangle

virtual float computeArea() const;   // Computes the area of the rectangle

virtual Shape* clone() const;  // Clones the object

}; 



#endif /* Rectangle_h */


