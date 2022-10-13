#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nickname[20];
    char password[10];
    int comparar;

    printf("Ingrese tu nickname: \n");
    gets(nickname);
    printf("Ingrese tu clave: \n");
    gets(password);
    comparar = strcmp(password,"abc123");
    if (comparar == 0){
        printf("La clave es correcta! \n");
    }
    else{
        printf("La clave es incorrecta! \n");
    }

    getch();
    return 0;
}
