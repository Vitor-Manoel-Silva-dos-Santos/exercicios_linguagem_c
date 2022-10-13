#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nombre1[12];
    char nombre2[12];
    /*char primera[2];
    char segunda[2];
    int ordenador;*/

    printf("Ingrese un nombre: \n");
    scanf(" %s", &nombre1);

    printf("Ingrese otro nombre: \n");
    scanf(" %s", &nombre2);


    strcat(primera,nombre1[0]);
    strcat(segunda,nombre2[0]);
    ordenador = strcmp(primera,segunda);

    if (ordenador == 0){
        printf("Los nombre %s y %s empiezan con el mismo caracter. \n", nombre1, nombre2);
    }
    else{
        if (ordenador < 0){
            printf("Primero nombre: %s y segun nombre: %s. \n", nombre2, nombre1);
        }
        else{
            printf("Primero nombre: %s y segun nombre: %s. \n", nombre1, nombre2);
        }
    }

    printf("%c y %c \n", primera, segunda);

    getch();
    return 0;

}
