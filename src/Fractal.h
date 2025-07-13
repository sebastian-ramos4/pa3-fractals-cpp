#pragma once
#include <cmath>
#include "ofMain.h"

class Fractal {

    public:
     virtual void draw() const = 0;
     virtual string getName() const = 0;
     virtual int getLevel() const = 0;

};

