#include <stdio.h>
#include <stdlib.h>
/*hacer una funcion que reciba el valor de un lado del cuadrado y retorne la superficie de él*/
int main(){
    int lado;

    printf("Dijite el valor del lado del cuadrado: \n");
    scanf ("%i", &lado);

    int sup = superficie(lado); /*Bien, ?que ocurre? cuando la función main tiene como return 0 significa que la función main captura el return de
    la ultima funcion ejecutada..*/

    printf("%i \n\n", sup); /*comprueba lo que pasa aqui.

    Puedes llamar la funcion y mostrar por pantalla al mismo tiempo, solo necessita añadir la funcion en el printformat*/

    printf("La superficie de lado %i metros tiene %i metros de superficie. \n",lado,sup);
    getch();
    return 0;
}

int superficie(int algunlado){

    int superficiecalc = algunlado * algunlado;
    return superficiecalc;

}
