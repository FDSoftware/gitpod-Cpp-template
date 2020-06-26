#include <iostream>
#include "./if-else.cpp"
using namespace std;

/*  cada 15 unidades, hay 1.5% de descuento
    cada 30 unidades, hay 3.9%
    cada 50u , 15%
    cada 100, 32%
*/
const float precio = 45.6;
float get_descuento(float precio, float descuento){     return precio - precio * (descuento / 10);    }

int get_number () {
    int x;
    cin >> x;
    while(cin.fail()) {
        cout << "Error" << std::endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> x;
    }
    return x;
}

int main (){
    cout << "hello world" << endl;
    //if_else_test();
    int cantidad = get_number();

    if(cantidad > 15 && cantidad < 30)
        cout << "el precio final es: " << get_descuento(precio, 1.5) << endl;
    if(cantidad > 30 && cantidad < 50)
        cout << "el precio final es: " << get_descuento(precio, 3.9) << endl;
    if(cantidad > 50 && cantidad < 100)
        cout << "el precio final es: " << get_descuento(precio, 15)  << endl;
    if(cantidad > 100)
        cout << "el precio final es: " << get_descuento(precio, 15)  << endl;

    return 0;
}