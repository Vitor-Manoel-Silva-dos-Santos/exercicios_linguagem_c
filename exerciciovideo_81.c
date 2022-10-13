#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // cargar por teclado dos variables de tipo string el nombre y el apellido de una persona, definir un tercer string y guardar la concatenacion del nombre y apellido

    char nombre[12];
    char apellido[20];
    char nombrecompleto[32];

    printf("Ingrese el nombre: \n");
    gets(nombre);

    printf("Ingrese el apellido: \n");
    gets(apellido);
    strcpy(nombrecompleto, nombre);
    strcat(nombrecompleto, " ");
    strcat(nombrecompleto, apellido);

    printf("El nombre ingresado es: %s \n", nombrecompleto);

    getch();
    return 0;

}
