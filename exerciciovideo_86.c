/*
Concepto de funciones, utilizada con el objectivo de compartir para lograr, un metodo de desarollo para gran programas, donde son ejecutados

funciones dejando el concepto de desarollo y ejecucion en linea.

vamos a ver programacion estructurada.

Problema: hacer un programa que pida dos valores y retorne la suma de los valores y mostre una mensaje de despedida por pontalla

utilizar tres funciones

*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    presentacion();
    cargarysumar();
    finalizacion();
    getch();
    return 0;
}

void presentacion(){
    printf("HOLA, el programa esta sendo ejecutado... \n");
}

void cargarysumar(){
    int valor1, valor2, suma;
    printf("Dijite un valor entero: \n");
    scanf("%d", &valor1);
    printf("Dijite otro valor entero: \n");
    scanf("%d", &valor2);
    suma = valor1 + valor2;
    printf("La suma de los valores %d + %d = %d, tenemos como resultado: %d \n",valor1,valor2,suma,suma);
}

void finalizacion(){
    printf("El programa ha sido ejectado... \n");
    printf("_________________________________\n");
}
