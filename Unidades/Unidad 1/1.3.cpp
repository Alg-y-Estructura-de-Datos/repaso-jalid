#include <iostream>
using namespace std;

void reservarAsiento(bool &asiento) {
    asiento = true; 
}

int main() {
    const int n = 5;  
    bool asientos[n] = {false};  

    int asientoDeseado;
    while (true) {
        cout << "Ingrese el número del asiento que desea reservar (0 a " << n - 1 << ") o -1 para salir: ";
        cin >> asientoDeseado;

        if (asientoDeseado == -1) {
            break;
        }

        if (asientoDeseado < 0 || asientoDeseado >= n) {
            cout << "Número de asiento no válido. Inténtelo de nuevo." << endl;
        } else if (asientos[asientoDeseado]) {
            cout << "El asiento ya está reservado." << endl;
        } else {
            reservarAsiento(asientos[asientoDeseado]);
            cout << "Asiento " << asientoDeseado << " reservado exitosamente." << endl;
        }
    }

    cout << "\nEstado final de los asientos:\n";
    for (int i = 0; i < n; i++) {
        cout << "Asiento " << i << ": ";
        if (asientos[i]) {
            cout << "Reservado";
        } else {
            cout << "Vacío";
        }
        cout << endl;
    }


    return 0;
}
