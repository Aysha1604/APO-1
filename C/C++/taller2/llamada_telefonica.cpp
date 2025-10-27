//taller estructuras repetitivas c++

# include <iostream>
# include <string>
using namespace std;

int main(){
    string numero; 
    int duracion;

    for (int i = 1; i <= 100; i++){
        cout << "\nLlamada #" << i << " - ingrese el numero marcado";
        cin >> numero;

        cout <<"ingrese duracion en minutos";
        cin >> duracion;

        if (numero.length() == 10){
            cout << "llamada a celular\n";
            cout << "valor: $" << duracion * 200 << endl;   
        } else if (numero.length() == 7){
            cout << "llamada a numero fijo\n";
            cout << "valor: $" << duracion * 250 << endl; 
        } else {
            cout << "numero invalido\n";
        }
    }

    return 0;
}
