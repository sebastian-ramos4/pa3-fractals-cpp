#pragma once
#include "ofMain.h"
#include "Fractal.h"

class AbstractFractal : public Fractal {
    protected:
     string name;
     int level;


    public:
     string getName() { return name; }
     int getLevel() { return level; }
     
     void setName(string name) { this->name = name; }
     void setLevel(int depth) { level = depth; }


     AbstractFractal(string name, int depth) {
        this->name = name;
        this->level = depth;
     }

    AbstractFractal(){
        this->level = 1;
        this->name = " ";
    }

}