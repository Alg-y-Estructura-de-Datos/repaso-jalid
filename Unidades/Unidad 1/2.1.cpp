/*
 Ejercicio N°1:

 Implemente una función para potencias enteras con recursividad. Definición recursiva
 para elevar un número a una potencia: Un número elevado a la potencia cero produce
 la unidad; la potencia de un número se obtiene multiplicándolo por sí mismo elevando
 a la potencia menos uno. Por ejemplo:

    32=3*(31)=3*[3*(30)]=3*(3*1)=9
 */
#include <iostream>
using namespace std;

int potenciaRecursiva(int exponente, int base){
    if(exponente == 0){
        return 1;
    } else {
        return base * potenciaRecursiva(exponente - 1, base);
    }
};

int main() {
    int exponente = 2, base = 3;
    cout << "El resultado de la potencia es: " << potenciaRecursiva(exponente, base) << endl;

    return 0;
}
