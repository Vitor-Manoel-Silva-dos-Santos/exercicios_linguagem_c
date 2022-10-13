#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char texto[31];
    int quantcarac;

    printf("Digite um texto: \t \t (SENDO FRASE OU PALAVRA) \n");
    gets(texto);
    quantcarac = strlen(texto);
    printf("O texto digitado foi: %s e a quantidade de caracteres e: %d. \n", texto, quantcarac);

    // pode hacer de la seguiente fuerma:
    printf("O texto digitado foi: %s e a quantidade de caracteres e: %d. \n", texto, strlen(texto));

    getch();
    return 0;

}
