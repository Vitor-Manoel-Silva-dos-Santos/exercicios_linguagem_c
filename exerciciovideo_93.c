#include <stdio.h>
#include <stdlib.h>

void identificador(char sexo){
    if (sexo == 'm'){
        prinf("Mulher \n");
    }
    if (sexo == 'h'){
        printf("Homem \n");
    }
}

int main(){

    char letra;
    do{

       printf("Digite uma letra: ");
       scanf(" %c",&letra);
       } while ((letra != 'm') || (letra != 'h'));
       identificador(letra);

       getch();
       return 0;
}
