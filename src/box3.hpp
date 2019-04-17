#ifndef box3_hpp
#define box3_hpp

#include <stdio.h>
#include <iostream>
#include "ofMain.h"



class Box3{
public:
    ofVec3f pos;
    ofColor color_1;
    ofColor color_2;
    ofColor color_3;
    ofColor color_4;
    
    
    
    //constructor
    Box3();
    
    //method
    void update();
    void draw();
    
    float random;
    
};


#endif /* box3_hpp */
