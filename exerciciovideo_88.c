/*Desarollar un programa con dos funciones a parte de la funcion main

la primeira solicite un valor entero e mostre el cuadrado del valor dicho

la segun que pida dos valores e retorne el producto de los mismos*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    calcularCuadrado();

    productos();

    getch();
    return 0;

}

void calcularCuadrado(){
    int valor, cuadrado;

    printf("Introduce un valor entero por teclado: \n");
    scanf("%i", &valor);
    cuadrado = valor * valor;

    printf("El cuadrado del valor %i es %i \n", valor, cuadrado);
}

void productos(){
    int valor1, valor2, producto;

    printf("Dijite un valor entero: \n");
    scanf("%i", valor1);
    printf("Dijite otro valor entero: \n");
    scanf("%i", valor2);
    producto = valor1 * valor2;

    printf("El producto de los valores %i * %i es %i \n", valor1, valor2, producto);
}
