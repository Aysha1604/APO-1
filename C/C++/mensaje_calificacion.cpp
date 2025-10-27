// Punto 13: Mensaje según nota (0-10)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nota;
    cout << "Ingrese la nota (0.0 - 10.0): ";
    cin >> nota;

    if (nota < 0.0 || nota > 10.0) {
        cout << "Nota invalida. Debe estar entre 0 y 10.\n";
        return 0;
    }

    if (nota < 5.0) {
        cout << "Suspenso\n";
    } else if (nota < 6.5) {
        cout << "Aprobado\n";
    } else if (nota < 8.5) {
        cout << "Notable\n";
    } else if (nota < 10.0) {
        cout << "Sobresaliente\n";
    } else { // nota == 10
        cout << "Matrícula de honor\n";
    }

    return 0;
}
