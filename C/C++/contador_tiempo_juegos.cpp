#include <iostream>
#include <string>
using namespace std;

int main() {
    const int DIAS_SEMANA = 7;                // Número de días a registrar
    string dias[DIAS_SEMANA] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    float totalHoras = 0;                      // Acumulador de horas totales
    const float LIMITE = 5.0;                 // Límite de horas por día
    bool jugoMucho = false;                    // Bandera: indica si algún día se jugó demasiado
    float horasTemp;                           // Variable temporal para las horas
    int contadorDias = 0;                      // Contador de días procesados

    // Ciclo para registrar horas de cada día
    for (int i = 0; i < DIAS_SEMANA; i++) {
        cout << "Ingrese las horas jugadas el " << dias[i] << ": ";
        cin >> horasTemp;

        totalHoras += horasTemp;   // Acumulador: suma las horas
        contadorDias++;            // Contador: aumenta un día

        if (horasTemp > LIMITE) { // Bandera: si jugó más del límite
            cout << "  ¡Cuidado! Jugo demasiado el " << dias[i] << " (" << horasTemp << " horas)\n";
            jugoMucho = true;
        }
    }

    // Resultados finales
    cout << "\nDias procesados: " << contadorDias << endl;
    cout << "Total de horas jugadas: " << totalHoras << " horas\n";

    float promedio = totalHoras / contadorDias;  // Calcula promedio usando el acumulador
    cout << "Promedio diario: " << promedio << " horas por dia\n";

    if (jugoMucho) {
        cout << "Hubo dias con exceso de juego\n";
    } else {
        cout << "Buen control del tiempo de juego\n";
    }

    return 0;
}