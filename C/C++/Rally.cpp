// Punto 10: Control de velocidad en tramo de rally
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distanciaKm, tiempoHoras;
    cout << "Longitud del tramo (km): "; cin >> distanciaKm;
    cout << "Tiempo empleado (horas): ";   cin >> tiempoHoras;

    if (tiempoHoras <= 0) {
        cout << "Error: tiempo debe ser mayor que 0.\n";
        return 0;
    }

    double velocidad = distanciaKm / tiempoHoras; // km/h
    cout << fixed << setprecision(2);
    cout << "Velocidad media: " << velocidad << " km/h\n";

    // Asumimos que el intervalo es inclusivo [40, 60]
    if (velocidad >= 40.0 && velocidad <= 60.0) {
        cout << "El conductor pasa la prueba.\n";
    } else {
        cout << "Descalificado por velocidad fuera del rango permitido.\n";
    }

    return 0;
}
