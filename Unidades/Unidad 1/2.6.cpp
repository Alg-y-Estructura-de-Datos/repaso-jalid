#include <iostream>
using namespace std;

int contarDigitos(int n, int cantDigitos){
    if(n == 0){
        return 0;
    }
    int digitoActual = n % 10;

    if(cantDigitos % 2 != 0 && digitoActual % 2 == 0){
        return 1 + contarDigitos(n / 10, cantDigitos - 1);
    } else {
        return contarDigitos(n / 10, cantDigitos - 1);
    }


    
}

int main(){
    unsigned int n = 22005;
    int cantDigitos = 5;

    int res = contarDigitos(n, cantDigitos);

    cout << "El numero " << n << " tiene " << res << " digitos." << endl;

    return 0;
}

