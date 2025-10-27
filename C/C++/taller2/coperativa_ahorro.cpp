//taller estructuras repetitivas c++

# include <iostream>
using namespace std;

int main(){
    double salarioMin, salarioCliente;
    long cedula;

    cout << "ingrese el salario minimo actual: ";
    cin >> salarioMin;


    cout << "\nIngrese la cedula ( 0 para salir): ";
    cin >> cedula;

    while (cedula != 0) {
        cout << "ingrese su salario actual: ";
        cin >> salarioCliente;

        double nSalarios = salarioCliente / salarioMin;
        double cupo = 0, interes = 0;
        int plazo = 0;

        if (nSalarios >= 1 && nSalarios <= 2) {
            cupo = 5000000; plazo = 24; interes = 1.75;
        } else if (nSalarios <= 5) {
            cupo = 10000000; plazo = 36; interes =1.6;
        } else if (nSalarios <= 8) {
            cupo = 15000000; plazo = 48; interes = 1.45;
        } else if (nSalarios <= 10) {
            cupo = 20000000; plazo = 60; interes = 1.2;
        } else {
            cupo = 35000000; plazo = 72; interes = 1.0;
        }

        double valorInteres = (cupo * interes / 100) * plazo;
        double totalCredito = cupo + valorInteres;
        double cuotaMensual = totalCredito / plazo;

        cout << "\nCedula: " << cedula << endl;
        cout << "cupo: $" << cupo << endl;
        cout << "interes: " << interes << "% mensual" << endl;
        cout << "valor interes: $" << valorInteres << endl;
        cout << "total credito: $" << totalCredito << endl;
        cout << "cuota mensual: $" << cuotaMensual << endl;

        cout << "\nIngrese otra cedula (0 para salir): ";
        cin >> cedula;
    }

    return 0; 
}