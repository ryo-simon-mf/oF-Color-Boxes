#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam.setDistance(2500);
    
    gui.setup();
    gui.add( toggle_0.setup("inside box",false));
    gui.add( toggle_1.setup("outside box1",false));
    gui.add( toggle_4.setup("outside box2",false));
    gui.add( toggle_2.setup("Rotate Auto",false));
    gui.add( toggle_3.setup("Rotate Mouse",false));
    
    gui.add( xslider.setup("inside box x",180.0,0.0,360.0));
    gui.add( yslider.setup("inside box y",180.0,0.0,360.0));
    gui.add( zslider.setup("inside box z",180.0,0.0,360.0));
    
    gui.add( xslider_1.setup("outside box1 x",180.0,0.0,360.0));
    gui.add( yslider_1.setup("outside box1 y",180.0,0.0,360.0));
    gui.add( zslider_1.setup("outside box1 z",180.0,0.0,360.0));
    
    gui.add( xslider_2.setup("outside box2 x",180.0,0.0,360.0));
    gui.add( yslider_2.setup("outside box2 y",180.0,0.0,360.0));
    gui.add( zslider_2.setup("outside box2 z",180.0,0.0,360.0));
    
    
    gui.add(color.setup("back ground  color",
                        ofColor(0, 0, 0),
                        ofColor(0, 0),
                        ofColor(255, 255)));
    
    gui.add( int_slider_0.setup("number of inside box ",100.0,1.0,1500.0));
    gui.add( int_slider_1.setup("number of outside box ",100.0,1.0,1500.0));
    gui.add( int_slider_2.setup("number of outside box ",100.0,1.0,1500.0));
    
    bHide = false;
    open = true;
    open1 = true;
    open2 =true;
    open3=true;
    open4=true;
    
    on = false;
    
    
    for(int i=0;i<int_slider_0;i++){
        Box tmp= Box();
        boxes.push_back(tmp);
    }
    for(int i=0;i<int_slider_1;i++){
        Box2 tmp= Box2();
        boxes2.push_back(tmp);
    }

    for(int i=0;i<int_slider_2;i++){
        Box3 tmp= Box3();
        boxes3.push_back(tmp);
    }
    
    rotate_x=0;
    rotate_y=0;
    rotate_z=0;
    
    
    ofSetFrameRate(60);
    ofGetFrameNum();
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0;i< int_slider_0;i++){
        boxes[i].update();
    }
    for(int i=0;i< int_slider_1;i++){
        boxes2[i].update();
    }
    for(int i=0;i< int_slider_2;i++){
        boxes3[i].update();
    }
    
    
    rotate_x += 0.3;
    rotate_y += 0.3;
    rotate_z += 0.3;
    
    
    ofBackground(color);
}

//--------------------------------------------------------------
void ofApp::draw(){

    cam.begin();
    
    
    ofEnableDepthTest();
    
    //rotate------------------------------
    
    if(open2){
        if(toggle_2 == true){
            ofRotateX(rotate_x);
            ofRotateY(rotate_y);
            ofRotateZ(rotate_z);
        }
    }
    
    //Rotate auto--------------------------
    
    if(open3){
        if(toggle_3 == true){
            ofRotateX(ofGetMouseX());
            ofRotateY(ofGetMouseY());
        }
    }
    
    
    //inside box---------------------------
    
    ofPushMatrix();
    if(open){
        ofRotate(100, xslider, yslider, zslider);
        if( toggle_0 == true ){
            for(int i=0; i < int_slider_0 ; i++){
                boxes[i].draw();
                Box tmp =Box();
                boxes.push_back(tmp);
            }
        }
    }
    ofPopMatrix();
    
    //outside box--------------------------
    
    ofPushMatrix();
    if(open1){
        ofRotate(100, xslider_1, yslider_1, zslider_1);
        if( toggle_1 == true ){
            for(int i=0; i < int_slider_1 ; i++){
                boxes2[i].draw();
                Box2 tmp =Box2();
                boxes2.push_back(tmp);
            }
        }
    }
    ofPopMatrix();
    
    //outside box--------------------------
    
    ofPushMatrix();
    if(open4){
        ofRotate(100, xslider_2, yslider_2, zslider_2);
        if( toggle_4 == true ){
            for(int i=0; i < int_slider_2 ; i++){
                boxes3[i].draw();
                Box3 tmp =Box3();
                boxes3.push_back(tmp);
            }
        }
    }
    ofPopMatrix();
    
    ofDisableDepthTest();
    cam.end();
    
    ofPopMatrix();
    if(!bHide){
        gui.draw();
    }
    ofPushMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'h'){
        bHide = !bHide;
    }
    if(key == 'f'){
        ofToggleFullscreen();
    }
    if(key == '1'){
        color = ofColor(255);
    }
    if(key == '2'){
        color = ofColor(0);
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
