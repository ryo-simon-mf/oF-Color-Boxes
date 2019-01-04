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
    ofxToggle toggle_0;
    ofxToggle toggle_1;
    ofxToggle toggle_2;
    ofxToggle toggle_3;
    ofxToggle toggle_4;
    ofxToggle depth;
    
    
    ofxFloatSlider xslider;
    ofxFloatSlider yslider;
    ofxFloatSlider zslider;
    ofxFloatSlider xslider_1;
    ofxFloatSlider yslider_1;
    ofxFloatSlider zslider_1;
    ofxFloatSlider xslider_2;
    ofxFloatSlider yslider_2;
    ofxFloatSlider zslider_2;
    ofxIntSlider int_slider_0;
    ofxIntSlider int_slider_1;
    ofxIntSlider int_slider_2;
    
    ofxColorSlider color;
    ofxVec3Slider xyz;
    ofxVec3Slider camPositionGui;
    bool bHide;
    bool open;
    bool open1;
    bool open2;
    bool open3;
    bool open4;
    bool on;
    
    
    float rotate_x;
    float rotate_y;
    float rotate_z;
    
    
    
    //    static const int num =25;
    //    Box boxes[num];
    vector<Box> boxes;
    vector<Box2> boxes2;
    vector<Box3> boxes3;
    
    
    
};
