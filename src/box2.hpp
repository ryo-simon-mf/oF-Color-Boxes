#ifndef box2_hpp
#define box2_hpp

#include <stdio.h>
#include <iostream>
#include "ofMain.h"



class Box{
public:
    ofVec3f pos;
    ofColor color_1;
    
    
    
    //constructor
    Box();
    
    //method
    void update();
    void draw();
    
    float random;
    
};


#endif /* box2_hpp */
