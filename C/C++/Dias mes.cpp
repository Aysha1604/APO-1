// Punto 14: Dias de un mes (considera anio para febrero)
#include <iostream>
using namespace std;

bool esBisiesto(int anio) {
    return (anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0);
}

int main() {
    int mes, anio;
    cout << "Ingrese numero del mes (1-12): ";
    cin >> mes;
    cout << "Ingrese el anio (por ejemplo 2024). Si no desea considerar anio escriba 0: ";
    cin >> anio;

    int dias = 0;
    switch(mes) {
        case 1: dias = 31; break;
        case 2:
            if (anio == 0) dias = 28; // si no se dio año asumimos 28
            else dias = esBisiesto(anio) ? 29 : 28;
            break;
        case 3: dias = 31; break;
        case 4: dias = 30; break;
        case 5: dias = 31; break;
        case 6: dias = 30; break;
        case 7: dias = 31; break;
        case 8: dias = 31; break;
        case 9: dias = 30; break;
        case 10: dias = 31; break;
        case 11: dias = 30; break;
        case 12: dias = 31; break;
        default: dias = -1; break;
    }

    if (dias == -1) cout << "Mes invalido.\n";
    else cout << "Dias del mes: " << dias << endl;

    return 0;
}
