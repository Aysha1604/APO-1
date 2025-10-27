//taller estructuras repetitivas c++

# include <iostream>
using namespace std;

int main(){

    int codigo;
    for(int i = 1; i <= 50; i++){
        cout << " ingrese codigo ASCII # " << i << ":"; 
        cin >> codigo; 

        if(codigo >= 48 && codigo <= 57)
            cout << "es un numero\n";

        else if (codigo == 42 || codigo == 43 || codigo == 45 || codigo == 47)
            cout << "es un operador aritmetico\n";
        else if (codigo >= 65 && codigo <= 90)
            cout << "es una letra mayuscula\n";
        else if (codigo >= 97 && codigo <= 122)
            cout << "es un letra minuscula\n";
        else if (codigo == 44 || codigo == 46 || codigo == 58 || codigo == 59)
            cout << "es un signno de puntuacion\n";
        else 
            cout << "no pertenece a ninguna categoria\n";
    }

    return 0;
}