#ifndef IF_ELSE_TESTS
#define IF_ELSE_TESTS

#include <iostream>

using namespace std;

void if_else_test(){
 cout << "Hiii, ahora vamos a ver un poco operadores booleanos:" << endl;
// primero los mas simples, que estan relacionados a numeros:

    // ejemplo simple, SI A es igual a B
    int A = 3, B = 3;
    if( A == B){
        cout << "A es igual a B" << endl;
    }
    // ahora, si quiero un "si A es menor a B"
    A = 2;

    if( A < B){
        cout << "A es menor a B" << endl;
    }
    // tambien se puede " si A es menor o igual a B"

    if( A <= B){
        cout << "A es menor o igual a B" << endl;
    }

    // otro caso es "mayor o igual, que son exactamente igual"
    A = 5;
    if( A > B)
        cout << "A es mayor que B" << endl;
    if( A >= B)
        cout << "A es mayor o igual que B" << endl;
    // apa, faltan los {} aca arriba no?, bueno,
    // el if y un par de elementos mas (else / for / while), te dejan escribir en bloque de esta manera:
    // elemento:
    //          foo1;
    //          foo2;
    // no se recomienda tanto usarlo, porque si identas mal = cagada, pero son utiles en casos inline, como por ejemplo:
    if( A >= B) cout << "A es mayor o igual que B (inline)" << endl;
    // ahora, vamos a ver el "else", que es el amigo del if ?), evaluemos esto:
    A = 2; B = 3;

    if ( A == B){
        cout << "A es igual a B" << endl;
    }else{
        cout << "A NO es igual a B" << endl;
    }
    // el bloque "else", solo se va a ejecutar cuando no se cumplio el bloque if al que esta pegado
    // por ejemplo, este else no se va a ejecutar
    B = 2;
    if ( A == B){
        cout << "A es igual a B" << endl;
    }else{
        cout << "A NO es igual a B" << endl;
    }
    // termino el primer round ?), ahora en un ratito te muestro los operadores logicos sobre binarios
}
#endif