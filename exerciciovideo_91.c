/*Hacer un programa que solicita el pago por hora de un funccionario e las horas trabajadas y mostre por pantalla el total a ser pago a el.*/

#include <stdio.h>
#include <stdlib.h>
void pagamentoFunc(float valor, int horas){

    float pagamento;

    pagamento = valor * horas;

    printf ("El funcionario debe recibir R$ %0.2f de salario. \n",pagamento);

}

int main(){

    float valores;
    int hora;

    printf("Introducir el valor de la hora del funcionario: \n");
    scanf("%f", &valores);
    printf("Introducir cuantidade de horas trabajadas por el: \n");
    scanf("%i", &hora);

    pagamentoFunc(valores, hora);

    getch();
    return 0;
}


