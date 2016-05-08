#include "ofMain.h"
#include "ofxGui.h"
#include "GraphicDesign.hpp"


class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void keyReleased(int key);
    
    vector<GraphicDesign>Graphic;
    int amount;
    bool bHide;
    
    ofxPanel gui;
    ofxFloatSlider SpeedX;
    ofxFloatSlider Range;
    ofxFloatSlider SpeedY;
    
};

