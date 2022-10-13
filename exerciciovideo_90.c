/*Funciones y parametros de entrada.
Problema: hacer una funcion que va recibir dos valores enteros y retorne el mayor de ellos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int primer, segun;
    printf("Dijite un valor: \n");
    scanf("%i",&primer);
    printf("Dijite otro valor: \n");
    scanf("%i", &segun);

    elMayor(primer,segun);
    getch();
    return 0;

}

void elMayor(int valor1,int valor2){

    if (valor1 > valor2){
        printf("El valor %i es mayor! \n", valor1);
    }
    else {
        printf("El valor %i es mayor! \n", valor2);
    }
}
