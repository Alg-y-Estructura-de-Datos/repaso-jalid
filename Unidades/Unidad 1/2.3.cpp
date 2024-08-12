#include <iostream>
using namespace std;

/*
 Ejercicio N°3
Implementar una función recursiva que dado un número entero lo muestre de forma
 invertida ej: 10523 de mostrar 32501. Dar aviso de error en caso de uso de números
 negativos y mostrar primero el número a invertir y después el número invertido.

 */





void invertir(int n, int &invertido){
    /*caso base*/
    if(n == 0){
        return;
    } else {
        /*codigo*/
        int digito = n % 10;
        invertido = invertido * 10 + digito;
        /*terminación y recursividad*/
        invertir(n / 10, invertido);
    }

    // digito = 3, n = 10523, invertido = 3
    // digito = 2, n = 1052, invertido = 32
    // digito = 5, n = 105, invertido = 325
    // digito = 1, n = 10, invertido = 3250
    // digito = 0, n = 0, invertido = 32501

};

int main() {
    int n = 10523;
    int invertido = 0;
    
    if(n < 0){
        cout << "Error: No se puede invertir números negativos." << endl;
        return -1;
    }

    cout << "El número es: " << n << endl;

    invertir(n, invertido);

    cout << "El invertido es: " << invertido << endl;


    return 0;
}