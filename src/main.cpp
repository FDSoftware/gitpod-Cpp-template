#include <iostream>
#include "./if-else.cpp"
#include <stdio.h>
using namespace std;

/*  cada 15 unidades, hay 1.5% de descuento
    cada 30u , 3.9%
    cada 50u , 15%
    cada 100 , 32%
*/
const float precio = 45.6;
float get_descuento(float precio, float descuento){     
    return (
            precio - precio * (descuento / 10) 
        );
}

int main (){
    int cantidad = get_number();
    if(cantidad > 15)
        printf( "el precio final es:  %f", get_descuento(precio, 1.5) );
    return 0;
}