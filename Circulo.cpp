#include "Circulo.h"
#include <math.h>

Circulo::Circulo()
{
}
Circulo::Circulo(float r, float x, float y) {
    _r = r;
     setCoordX(y);
    setCoordY(x);
}
float Circulo::Area(){
    float A;
    A = _r * _r * M_PI;
    return A;
}
float Circulo::Perimetro(){
    float P;
    P = 2 * M_PI * _r;
    return P;
}
Circulo::~Circulo(){
}
