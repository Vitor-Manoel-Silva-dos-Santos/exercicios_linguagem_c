#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define cuant 20

int main(){

    char nombre1[cuant], nombre2[cuant], nombre3[cuant];


    printf("Dijite un nombre: \n");
    gets(nombre1);

    printf("Dijite otro nombre: \n");
    gets(nombre2);


    if (strlen(nombre1)>strlen (nombre2)){
        strcpy(nombre3, nombre1);
        printf("El nombre mayor es: %s.", nombre3);
    }
    else{
        if (strlen(nombre1) == strlen(nombre2)){
            strcpy(nombre3, nombre1);
            printf("Los nombres son iguales y si hay dijitado: %s", nombre3);
        }
        else{
            strcpy(nombre3, nombre2);
            printf("El nombre mayor es: %s",nombre3);
        }
    }


    getch();
    return 0;
}
