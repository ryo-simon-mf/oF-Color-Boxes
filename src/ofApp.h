#pragma once

#include "ofMain.h"
#include "box2.hpp"
#include "box1.hpp"
#include "box3.hpp"
#include "ofxGui.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    
    ofEasyCam cam;
    
    ofxPanel gui;
    ofxToggle toggle_0, toggle_1, toggle_2, toggle_3, toggle_4, depth;
    ofxFloatSlider xslider, yslider, zslider, xslider_1, yslider_1, zslider_1, xslider_2, yslider_2, zslider_2, int_slider_0, int_slider_1, int_slider_2;
    
    ofxColorSlider color;
    ofxVec3Slider xyz;
    ofxVec3Slider camPositionGui;
    
    
    bool bHide, open, open1, open2, open3, open4, on;
    
    float rotate_x, rotate_y, rotate_z;
    
    
    
    //    static const int num =25;
    //    Box boxes[num];
    vector<Box> boxes;
    vector<Box2> boxes2;
    vector<Box3> boxes3;
    
    
    
};
