#ifndef _CIRCULO_H
#define _CIRCULO_H
#include "Geometrica.h"

class Circulo: public Geometrica
{
public:

    Circulo(float r, float x, float y);
    float Area();
    float Perimetro();
    void setRadio(float r){_r = r;}
    float getRadio(){return _r;}
    ~Circulo();

private:
    float _r;
    Circulo();
};

#endif // CIRCULO_H
