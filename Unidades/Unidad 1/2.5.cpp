// Recursividad con 2 casos bases y 1 llamado a la función
#include <iostream>
using namespace std;

bool contieneDigito(int n, int d){
    if(n == 0){
        return false;
    } 

    if(n % 10 == d){
        return true;
    }
    
    return contieneDigito(n / 10, d);
}

int main() {
    int n, d;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    cout << "Ingrese un digito: ";
    cin >> d;

    // Verificar si el dígito está en el número usando la función recursiva
    bool resultado = contieneDigito(n, d);
    if (resultado) {
        cout << "El digito " << d << " esta en el numero " << n << "." << endl;
    } else {
        cout << "El digito " << d << " no esta en el numero " << n << "." << endl;
    }

    return 0;
}