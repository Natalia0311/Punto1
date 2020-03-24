/**
 * Project Untitled
 */


#ifndef _GEOMETRICA_H
#define _GEOMETRICA_H
#include <iostream>

using namespace std;

class Geometrica
{
public:
    virtual float Area();
    virtual float Perimetro();
    void setCoordX(float x){_cx = x;}
    float getCoordX(){return _cx;}
    void setCoordY(float y){_cy = y;}
    float getCoordY(){return _cy;}
    Geometrica();
    ~Geometrica();

private:

       float _cx;
       float _cy;
       float _angulo;
};

#endif // GEOMETRICA_H
