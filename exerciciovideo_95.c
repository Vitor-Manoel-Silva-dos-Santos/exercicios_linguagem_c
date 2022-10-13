#include <stdio.h>
#include <stdlib.h>
/*Elaborar una función que reciba un numero entero y mostre por pantalla todos los numeros anteriores*/


int main(){

    int hasta;

    printf("Ensira hasta que valor desea ver: \n");
    scanf("%i", &hasta);

    mostrarValores(hasta);

    getch();
    return 0;
}

void mostrarValores(int ultimo){

if (ultimo < 0){
    for (int x = 0; x >= ultimo; x--){
        printf("%i \n",x);
    }
}
else{
    for (int x=0; x <= ultimo; x++){
        printf("%i \n",x);
    }
}


}
