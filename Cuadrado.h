#ifndef _CUADRADO_H
#define _CUADRADO_H
#include "Geometrica.h"

class Cuadrado: public Geometrica
{
public:

    Cuadrado(float l, float x, float y);
    float Area();
    float Perimetro();
    void setLado(float l){_l = l;}
    float getLado(){return _l;}
    ~Cuadrado();

private:
    float _l;
    Cuadrado();
};

#endif // CUADRADO_H
