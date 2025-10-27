//taller estructuras repetitivas c++

#include <iostream>
using namespace std;

int main(){
    double deuda;
    int referidos;

    cout << "ingrese el valor de la deuda (0 para salir): ";
    cin >> deuda;

    while (deuda > 0){
        cout << "ingrese el numero de referidos: ";
        cin >> referidos;

        double ajuste = deuda;
        if (referidos == 1 || referidos == 2)
        ajuste = deuda * 0.70;
        else if (referidos >= 3&& referidos == 2)
        ajuste = deuda * 0.70;
        else if (referidos > 5)
        ajuste = deuda * 0.40;

        cout << "valor orginal: " << deuda << endl;
        cout << "valor ajustado:" << ajuste << endl;
        
        cout << "\nIngrese otra dueda (o para salir): ";
        cin >> deuda;

    }
    return 0;
}