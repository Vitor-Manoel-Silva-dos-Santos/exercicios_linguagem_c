#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Problema: Ingresar dos nombres por teclado, mostrar un mensaje si son iguales y sino mostrar el que es mayor alfabeticamente.
    char nombre1[10], nombre2[10];
    int resultante;

    printf("Digite un nombre hasta 10 caracteres: \n");
    gets(nombre1);

    printf("Digite otro nombre hasta 10 caracteres \n");
    gets(nombre2);

    resultante = strcmp(nombre1,nombre2);

    if (resultante == 0){
        printf("Los nombres son iguales. \n");
    }
    else{
        if (resultante > 0){
            printf("Los nombres son distintos. El nombre: %s es mayor que el nombre: %s.",nombre1,nombre2);
        }
        else{
            printf("Los nombres son distintos. El nombre: %s es mayor que el nombre: %s.",nombre2,nombre1);
        }
    }

    /*Que pasa con esa funcion strcmd: la funcion troca los caracteres dijitados por numeros enteros respectivamiente de acuerdo com ASCII
    asi restando y viendo cual es mayor, si los nombres son iguales entonces la funcion retorna el valor 0, si los valores son distintos pero el primero
    dijitado en la funcion es mayor, entonces el programa retorna un valor mayor que 0, si lo segundo nombre es mayor entonces ele programa retorna
    un valor menor que cero.
    */


    getch();
    return 0;
}
