#include <stdio.h>
#include <stdlib.h>

/*Hacer una funcion que reciba tres valores y mostre el mayor por pantalla.*/
void elMayor(int n1, int n2, int n3){

    int mayor;
    mayor = n1;

    if (mayor < n2){
        mayor = n2;
        if (mayor < n3){
            mayor = n3;
        }
    }
    printf("El mayor de %i, %i, %i es el %i \n", n1, n2, n3, mayor);
}
int main(){
    int num1;
    int num2;
    int num3;

    printf("Entre con el primero valor: \n");
    scanf("%i", &num1);

    printf("Entre con el segundo valor: \n");
    scanf("%i", &num2);

    printf("Entre con el tercero valor: \n");
    scanf("%i", &num3);

    elMayor(num1,num2,num3);
    getch();
    return 0;
}

