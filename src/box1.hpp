#ifndef box1_hpp
#define box1_hpp

#include <stdio.h>
#include <iostream>
#include "ofMain.h"



class Box2{
public:
    ofVec3f pos;
    ofColor color_1;
    ofColor color_2;
    ofColor color_3;
    ofColor color_4;
    
    
    
    
    //constructor
    Box2();
    
    //method
    void update();
    void draw();
    
    
    float random;
    float random2;
    
};

#endif /* box1_hpp */
