//
//  GraphicDesign.cpp
//  trois
//
//  Created by Will on 16/5/6.
//
//

#include "GraphicDesign.hpp"

GraphicDesign :: GraphicDesign(float rateY_, float range_)
{
    speedY = rateY_;
    radius = range_;
    
}

void GraphicDesign :: setup(float Rate_){
    
    speedX = Rate_;

    X = ofRandom(0,ofGetWidth());
    Y = ofRandom(0,ofGetHeight());
    
    color = ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255),ofRandom(100,250));
}

void GraphicDesign :: bounce(){
    
    if (X < 0 || X > ofGetWidth()){
        
        color = ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255),ofRandom(100,250));
        
        speedX *= -1;
    }
    
    if (Y < 0 || Y > ofGetHeight()){
        
        color = ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255),ofRandom(100,250));
        speedY *= -1;
    }
    
    X += speedX;
    Y += speedY;
    
}

void GraphicDesign :: display (){
    
    ofSetColor(color);
    ofSetCircleResolution(70);
    ofDrawEllipse(X,Y,radius,radius);
}
