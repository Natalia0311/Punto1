#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Pentagono.h"
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<Geometrica*> Data;
    int fig = 0;
    float r=0, l=0, b=0, h=0, x=0, y=0;
    char Acep;
    Acep= 's';
    Geometrica* g=0;

    while(true){
        cout << "Escoja la opcion de la figura que desea:" << endl << "Circulo(1), Cuadrado(2), Triangulo(3) o Pentagono(4)" << endl;
            cin >> fig;
            switch (fig) {
            case 1:
                cout << "Ingrese el valor del radio: " << endl;
                cin >> r;
                cout << endl;
                cout << "Ingrese las coordenadas del centro de la figura:";
                cin >> x;
                cin >> y;
                g = new Circulo(r, x, y);
                break;
            case 2:
                cout << "Ingrese el valor del  lado: " << endl;
                cin >> l;
                cout << endl;
                cout << "Ingrese las coordenadas del centro de la figura:";
                cin >> x;
                cin >> y;
                g = new Cuadrado( l, x, y);
                break;
            case 3:
                cout << "Ingrese la base del triangulo: " << endl;
                cin >> b;
                cout << "Ingrese la altura para el triangulo: ";
                cin >> h;
                cout << endl;
                cout << "Ingrese las coordenadas del centro de la figura:";
                cin >> x;
                cin >> y;
                g = new Triangulo( b, h, x, y);
                break;
            case 4:
                cout << "Ingrese el lado del pentagono " << endl;
                cin >> l;
                cout << endl;
                cout << "Ingrese las coordenadas del centro de la figura:";
                cin >> x;
                cin >> y;
                g = new Pentagono(l, x, y);
                break;
            default:
                cout << "Verifique si ingreso correctamente la opcion que desea" << endl;
                break;
            }
            Data.push_back( g );
            cout << "¿Desea mas figuras? si:(s) no:(n)";
            cin >> Acep;
    if (Acep != 's'){ break;}

    }


    for (int i = 0; i < Data.size(); i++){
        cout << "Figura(" << i << "): "<< "Perímetro: " << Data.at(i)->Perimetro() << " y área: " << Data.at(i)->Area() << endl;
    }

    for (int i = 0; i < Data.size(); i++){
        delete Data.at(i);
    }
    return 0;
}
