#include <stdio.h>
#include <stdlib.h>

/*Confeccionar una funcion que reciba dos valores enteros y retorne el mayor de ellos*/

int main(){
    int nume1, nume2, mayoresul;
    printf("Dijite un numero: \n");
    scanf("%i",&nume1);
    printf("Dijite otro numero: \n");
    scanf("%i",&nume2);

    mayoresul = elMayor(nume1,nume2);

    printf("El mayor es: %i\n", mayoresul);


    printf("\n\n\n%i\n\n\n", mayoresul); /*Podes ver que la funcion retorna un valor entero, el mayor.*/
    getch();
    return 0;
}

int elMayor(int num1, int num2){
    //int mayor;

    if (num1>num2)//{ //ve abajo que para facilitar nuestro trabajo podemos retornar el valor diretamienta, sin añadir a una nueva variable.
        //mayor = num1;
        return num1;
    //} //tambien podemos quitar las llaves y el programa ejecutara igual
    else//{
        //mayor = num2;
        return num2;
    //}
    //return mayor;
}
