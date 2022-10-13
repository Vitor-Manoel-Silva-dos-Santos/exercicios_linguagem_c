/*desarollar un programa que pida tres valores y mostre por pantalla el menor de los valores. La funcione debe ser ejecutada 3 veces*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    menordeTres ();
    getch();
    return 0;
}

void menordeTres(){
    int primer, segun, tercer, menor;
    printf("Dijite el primer valor: \n");
    scanf("%i", &primer);
    printf("Dijite el segun valor: \n");
    scanf("%i", &segun);
    printf("Dijite el tercer valor: \n");
    scanf("%i", &tercer);

    menor = primer;

    if (menor > segun){
        menor = segun;
    }
    else{
        if (menor > tercer){
            menor = tercer;
        }
    }
    printf("El menor valor de los valores %i, %i y %i es %i. \n", primer, segun, tercer, menor);

}
