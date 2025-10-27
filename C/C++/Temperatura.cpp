// Punto 12: Punto de ebullicion (asumimos grados Celsius)
#include <iostream>
using namespace std;

int main() {
    double temp;
    cout << "Ingrese la temperatura (grados Celsius): ";
    cin >> temp;

    if (temp > 100.0) cout << "Arriba del punto de ebullicion del agua.\n";
    else cout << "Abajo del punto de ebullicion del agua.\n";
    return 0;
}
