#include <iostream>
//#include "./if-else.cpp"
using namespace std;

/*  cada 15 unidades, hay 1.5% de descuento
    cada 30u , 3.9%
    cada 50u , 15%
    cada 100 , 32%
*/
const float precio = 45.6;
float get_descuento(float precio, float descuento){     return precio - precio * (descuento / 10);    }

int main (){
    int cantidad = get_number();

    if(cantidad > 15 && cantidad < 30)
        cout << "el precio final es: " << get_descuento(precio, 1.5) << endl;
    if(cantidad > 30 && cantidad < 50)
        cout << "el precio final es: " << get_descuento(precio, 3.9) << endl;
    if(cantidad > 50 && cantidad < 100)
        cout << "el precio final es: " << get_descuento(precio, 15)  << endl;
    if(cantidad > 100)
        cout << "el precio final es: " << get_descuento(precio, 32)  << endl;

    return 0;
}