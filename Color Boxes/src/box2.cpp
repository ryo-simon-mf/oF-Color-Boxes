//
//  box2.cpp
//  boxes_ver_3_0
//
//  Created by Ryo Simon on 2018/12/12.
//

#include "box2.hpp"

Box::Box(){
    pos = ofVec3f(ofRandom(-250,250),//Width
                  ofRandom(-250,250),//Height
                  ofRandom(-250,250));//Depth
    
    
    random = ofRandom(50);
    
    color_1 = ofColor(ofRandom(255),random,random);
    
    
    
    
    
    
}

void Box::update(){
    
}

void Box::draw(){
    ofSetColor(color_1);
    ofDrawBox(pos.x, pos.y, pos.z, ofRandom(100),//ofGetWidth()),
              ofRandom(100),//ofGetHeight()),
              ofRandom(100));//ofGetMouseY()));
}
