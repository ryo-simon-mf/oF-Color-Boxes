#include "box1.hpp"

Box2::Box2(){
    pos = ofVec3f(ofRandom(-150,150),//Width
                  ofRandom(-150,150),//Height
                  ofRandom(-150,150));//Depth
    
    
    color_2 = ofColor(random,ofRandom(255),random);
    color_3 = ofColor(random,random,ofRandom(255));
    color_4 = ofColor(random*5,random*5,random);
    
    random=ofRandom(50);
    
    
    
    //pd Pure Date
    //VJ DERIVATIVE
    //cinder
    //Robert Hodgin
    //school for poetic computation
    //memo akten
    
}

void Box2::update(){
    
}

void Box2::draw(){
    //    ofSetColor(color_1);
    //    ofDrawBox(pos.x, pos.y, pos.z, ofRandom(100),//ofGetWidth()),
    //              ofRandom(100),//ofGetHeight()),
    //              ofRandom(100));//ofGetMouseY()));
    ofSetColor(color_2);
    ofDrawBox((pos.x)+800, (pos.y), (pos.z), ofRandom(100),
              ofRandom(100),
              ofRandom(100));
    
    ofSetColor(color_3);
    ofDrawBox((pos.x), (pos.y)+800, (pos.z), ofRandom(100),
              ofRandom(100),
              ofRandom(100));
    
    ofSetColor(color_4);
    ofDrawBox((pos.x), (pos.y), (pos.z)+800, ofRandom(100),
              ofRandom(100),
              ofRandom(100));
    
    ofSetColor(color_2);
    ofDrawBox((pos.x) - 800, (pos.y), (pos.z), ofRandom(100),
              ofRandom(100),
              ofRandom(100));
    
    ofSetColor(color_3);
    ofDrawBox((pos.x), (pos.y) - 800, (pos.z), ofRandom(100),
              ofRandom(100),
              ofRandom(100));
    
    
    ofSetColor(color_4);
    ofDrawBox((pos.x), (pos.y), (pos.z) - 800, ofRandom(100),
              ofRandom(100),
              ofRandom(100));
}
