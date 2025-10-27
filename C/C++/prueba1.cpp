#include <stdio.h>

int main(){
    char c;

    printf("Ingrese un caracter: ");
    scanf("%c", &c);

    switch (c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Es una vocal.\n");
            break;
        default:
            printf("No es una vocal.\n");
    }

    return 0;
}