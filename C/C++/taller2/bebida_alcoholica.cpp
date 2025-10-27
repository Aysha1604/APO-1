// taller estructuras repetitivas c++
# include <iostream>
# include <string>
using namespace std;

int main (){
    int N = 200;
    string bebida;
    int calorias;
    for(int i = 1; i <= N; i++){
        
        cout << "\nPersona " << i << " - ingrese la bebida ";
        cin >> bebida;

        if (bebida == "cerveza") calorias = 45;
        else if (bebida == "vino") calorias = 65;
        else if (bebida == "champagne") calorias = 65;
        else if (bebida == "vodka") calorias = 121;
        else if (bebida == "aguardiente") calorias = 222;
        else if (bebida == "conac") calorias = 222;
        else if (bebida == "whisky") calorias = 244;
        else if (bebida == "ginebra") calorias = 244;
        else if (bebida == "ron") calorias = 244;
        else if (bebida == "cremamenta") calorias = 376;
        else if (bebida == "licordulce") calorias = 372;
        else if (bebida == "licorcafe") calorias = 376;
        else calorias = 0;

        cout << "calorias: " << calorias << " - Nivel: ";
        if (calorias < 200) cout << "Bajo\n";
        else if (calorias <= 300) cout << "Normal\n";
        else cout << "Alto\n";

    }

    return 0; 

}
