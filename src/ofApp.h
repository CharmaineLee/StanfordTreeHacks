#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxTimeline.h"
#include "ofxOsc.h"
#include <vector>
#include "ofxPowerMate.h"

#define PORT 9000


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
    
    ofLight light;
    void editPlayStateSwitch();
    ofxTimeline timeline;
    vector<ofxTLKeyframe*> rotationXkeyframes;
    vector<ofxTLKeyframe*> rotationYkeyframes;
    vector<ofxTLKeyframe*> zoomkeyframes;
    ofxTLKeyframe* rotationXframe = new ofxTLKeyframe();
    ofxTLKeyframe* rotationYframe = new ofxTLKeyframe();
    ofxTLKeyframe* zoomframe = new ofxTLKeyframe();
    ofSpherePrimitive faithBall;
    ofImage faithImage;
    ofEasyCam easyCam;
    ofVideoPlayer final;
    vector<int> stored;
    
    ofxXmlSettings settings;

    //    //    ofFile imageSaveLocation;
    //
    //    ofImage screenGrab;
    //    //LIVE VIDEO CAMERA
    //    ofVideoGrabber cameraLive;
    //    int camWidth;
    //    int camHeight;
    //
    //    //OFX GUI
    //    ofxPanel primePanel;
    //    ofxIntSlider rortatePushPop;
    //    ofxIntSlider xShift;
    //    ofxIntSlider yShift;
    //
    //    ofxIntSlider anotherRotation;
    //    ofxIntSlider xShift2;
    //    ofxIntSlider yShift2;
    //
    //    ofxIntSlider brillo;
    //    ofxButton clear;
    //    ofxButton save;
    //    //DRAWING TOOL
    //    ofImage slit;
    //
    //    //DRAWING SURFACE
    //    ofFbo fullScan;
    
    int buttonClickTracker;
    
    //VARS FROM OSC
    int zoomVar; //ZOOM VARIABLE, -200,850
    int xRot; //X-ROTATION VARIABLE, 0,360
    int yRot; //Y-ROTATION VARIABLE, 0,360
    //int opticalRegion; // 1,1,3
    
    //GUI
    ofxPanel GUI;
    ofxIntSlider xRotation;
    ofxIntSlider yRotation;
    ofxIntSlider zoomAmount;
    
    
    
    ofxIntSlider opticalRegion;
    
    ofxButton play;
    ofxButton pause;
    ofxToggle stop_and_PlayBack;
    
    ofxOscReceiver receive;
    float oscX = 0.0;
    
    //POWER-MATE
    void onPowerMateData(powerData& d);
    ofxPowerMate powerMate;
    int globalSpinVol;
    int globalClick;
    
};
