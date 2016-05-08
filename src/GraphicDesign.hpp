//
//  GraphicDesign.hpp
//  trois
//
//  Created by Will on 16/5/6.
//
//

#include "ofMain.h"

class GraphicDesign
{
public:
    
    GraphicDesign(float rateY_, float range_);
    
    void setup(float Rate_);
    void bounce();
    void display();
    
    float X;
    float Y;
    float speedX;
    float speedY;
    int	radius;
    ofColor color;
};


