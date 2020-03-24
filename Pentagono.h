#ifndef _PENTAGONO_H
#define _PENTAGONO_H
#include "Geometrica.h"

class Pentagono: public Geometrica
{
public:

    Pentagono(float l, float x, float y); //constructor para asignar datos
    float Area();
    float Perimetro();
    void setLado(float l){_l = l;}
    float getLado(){return _l;}
    ~Pentagono();

private:
    float _l;
    Pentagono();

};

#endif // PENTAGONO_H
