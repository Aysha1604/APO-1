// Punto 3: Calificación final ponderada
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double examen, lecciones, tareas, practicas;
    cout << "Nota examen (0-100): ";
    cin >> examen;
    cout << "Nota lecciones (0-100): ";
    cin >> lecciones;
    cout << "Nota tareas (0-100): ";
    cin >> tareas;
    cout << "Nota prácticas (0-100): ";
    cin >> practicas;

    double finalScore = examen * 0.60 + lecciones * 0.20 + tareas * 0.15 + practicas * 0.05;

    cout << fixed << setprecision(2);
    cout << "Calificación final: " << finalScore << " / 100" << endl;
    return 0;
}
