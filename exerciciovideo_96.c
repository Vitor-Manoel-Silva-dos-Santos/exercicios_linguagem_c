#include <stdio.h>
#include <stdlib.h>


/*Desarollar una función que reciba un caracter y mostre por pantalla si es una vogal ol no. Debe funcionar tanto con minusculas y maiusculas*/

int main(){
    char caracter;

    printf("Ensira un caracter: \n");
    scanf(" %c", &caracter);

    esCaracter(caracter);
    getch();
    return 0;
}

void esCaracter(int carac){
    char vetor[10] = {'a','e','i','o','u','A','E','I','O','U'};
    for (int x=0; x<=10; x++){
        if (carac == vetor[x]){
            printf("Es una vogal... \n");
            break;
        }
        else{
            if (x==10){
                printf("No es una vogal... \n");

            }

        }

    }
}
