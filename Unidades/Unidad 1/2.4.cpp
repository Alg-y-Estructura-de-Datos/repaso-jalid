
#include <iostream>
#include <vector>
using namespace std;

int calcularElementos(vector<int> &v, int n) {
   
    if(n == 1){
        return v[0];
    }

    int maxAnterior = calcularElementos(v, n-1);

    if(v[n] > maxAnterior){
        return v[n];
    } else {
        return maxAnterior;
    }


    // v[] = {1, 2, 3};
    // 
};

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: " << endl;
    cin >> n;
    vector<int> Array(n);
    

    cout << "Ingrese los datos del array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> Array[i];
    }

    cout << "El mayor elemento del array es: " << calcularElementos(Array, n-1) << endl;

   

    return 0;
}
