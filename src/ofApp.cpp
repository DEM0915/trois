#include "ofApp.h"

void ofApp::setup(){
    
    
    gui.setup("App setting");
    
    gui.add(SpeedX.setup("SpeedX",2.8,0,10));
    gui.add(Range.setup("Range",24.4,0,101));
    gui.add(SpeedY.setup("SpeedY",2.8,0,10));
    bHide = true;
    
    
    amount = 2;
    
    for (int i = 0; i < amount; i++){
        
        GraphicDesign newGraphicdesign(SpeedY, Range);
        newGraphicdesign.setup(SpeedX);
        
        Graphic.push_back(newGraphicdesign);
    }
    
    
}

void ofApp::update(){
    
    for (int i = 0; i < Graphic.size(); i++){
        
        Graphic[i].bounce();
    }
}


void ofApp::draw(){
    
    ofBackgroundGradient( ofColor( 255 ), ofColor( 190 ) );
    
    if( bHide ){
        
        gui.draw();
    }
    
    for (int i = 0; i < Graphic.size(); i++){
        
        Graphic[i].display();
    }
    
}

void ofApp::keyReleased(int key){
    
    if (key == ' '){
        
        GraphicDesign newGraphicdesign(SpeedY,Range);
        newGraphicdesign.setup(SpeedX);
        Graphic.push_back(newGraphicdesign);
    }
    
    
    if (key == 'c') {
        
        if (Graphic.size() > 0){
            
            Graphic.erase(Graphic.begin());
        }
    }
    
    if( key == 'g' ){
        
        bHide = !bHide;
        
    }
}