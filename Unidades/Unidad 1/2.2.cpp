#include <iostream>
using namespace std;

int invertir(int n){
    if(n == 1){
        return 1;
    } else {
        return n + invertir(n-1);
    }
};

int main() {
    int n = 5;
    cout << "El resultado de la suma es: " << invertir(n) << endl;


    return 0;
}