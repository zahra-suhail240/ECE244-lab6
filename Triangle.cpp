//
//  Triangle.cpp
//  Lab5
//
//  Created by Tarek Abdelrahman on 2020-11-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

//  ECE244 Student: Write the implementation of the class Rectangle here

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "Shape.h"
#include "Triangle.h"

// Build a Triangle object
Triangle::Triangle(string n, float xcent, float ycent, float x1, float y1, float x2, float y2, float x3, float y3):Shape(n, xcent, ycent) {
    x1coord = x1; //can access private data memebers becz it's the same class
    y1coord = y1;

    x2coord = x2;
    y2coord = y2;

    x3coord = x3;
    y3coord = y3;
}

Triangle::~Triangle() {
    // Nothing to do
}

// Accessor

float Triangle :: getX1() const{
    return x1coord;
}

float Triangle :: getY1() const{
    return y1coord;
}

float Triangle :: getX2() const{
    return x2coord;
}

float Triangle :: getY2() const{
    return y2coord;
}

float Triangle :: getX3() const{
    return x3coord;
}

float Triangle :: getY3() const{
    return y3coord;
}

// Mutator

void Triangle :: setX1(float x1){
    x1coord = x1;
}

void Triangle :: setY1(float y1){
    y1coord = y1;
}

void Triangle :: setX2(float x2){
    x2coord = x2;
}

void Triangle :: setY2(float y2){
    y2coord = y2;
}

void Triangle :: setX3(float x3){
    x3coord = x3;
}

void Triangle :: setY3(float y3){
    y3coord = y3;
}

void Triangle::draw() const {
    // Set floating point printing to fixed point with 2 decimals
    cout << std::fixed;
    cout << std::setprecision(2);
    
    // Print the information
    //x_centre=(x1coord + x2coord + x3coord)/3;
    //y_centre=(y1coord + y2coord +y3coord)/3;
    cout << "triangle: " << name << " "
         << (x1coord + x2coord + x3coord)/3 << " " << (y1coord + y2coord +y3coord)/3
         << " " << x1coord <<  " "  << y1coord << " " <<  x2coord << " " <<  y2coord << " " <<  x3coord << " " <<  y3coord << " " << computeArea()<< endl;
}

float Triangle::computeArea() const {//
    float answer = x1coord*(y2coord-y3coord) + x2coord*(y3coord-y1coord) + x3coord*(y1coord-y2coord);

    if(answer <= 0){
        answer= answer*(-1);

        answer= answer*0.5;

        return answer;
    }
    else{
        answer= answer*0.5;
        return answer;
    }
}

Shape* Triangle::clone() const {
    return (new Triangle(*this));
}


