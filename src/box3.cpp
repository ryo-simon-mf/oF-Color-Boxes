

#include "box3.hpp"
Box3::Box3(){
    pos = ofVec3f(ofRandom(-150,150),//Width
                  ofRandom(-150,150),//Height
                  ofRandom(-150,150));//Depth
    
    
    random = ofRandom(50);
    
    color_1 = ofColor(random,random*3,random*3);
    color_2 = ofColor(random*3,random,random*3);
    color_3 = ofColor(random,random*5,random*5);
    color_4 = ofColor(random*5,random,random*5);
    
    
    
    
    
    
    
}

void Box3::update(){
    
}

void Box3::draw(){
    ofSetColor(color_1);
    ofDrawBox(pos.x+800, pos.y+800, pos.z+800, ofRandom(100),ofRandom(100),ofRandom(100));
    
    ofSetColor(color_1);
    ofDrawBox(pos.x-800, pos.y-800, pos.z-800, ofRandom(100),ofRandom(100),ofRandom(100));
    
    ofSetColor(color_2);
    ofDrawBox(pos.x+800, pos.y+800, pos.z-800, ofRandom(100),ofRandom(100),ofRandom(100));
    
    ofSetColor(color_2);
    ofDrawBox(pos.x-800, pos.y-800, pos.z+800, ofRandom(100),ofRandom(100),ofRandom(100));
    
    ofSetColor(color_3);
    ofDrawBox(pos.x+800, pos.y-800, pos.z+800, ofRandom(100),ofRandom(100),ofRandom(100));
    
    ofSetColor(color_3);
    ofDrawBox(pos.x-800, pos.y+800, pos.z-800, ofRandom(100),ofRandom(100),ofRandom(100));
    
    ofSetColor(color_4);
    ofDrawBox(pos.x-800, pos.y+800, pos.z+800, ofRandom(100),ofRandom(100),ofRandom(100));
    
    ofSetColor(color_4);
    ofDrawBox(pos.x+800, pos.y-800, pos.z-800, ofRandom(100),ofRandom(100),ofRandom(100));
    
    
    
    
    
}
