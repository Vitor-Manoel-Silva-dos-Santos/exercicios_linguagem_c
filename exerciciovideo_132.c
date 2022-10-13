#include <stdio.h>
#include <stdlib.h>

/*hacer una declaracion de registro y luego definir tres variables de dicho tipo, cargar las tres variables
y mostrar seguidamente el nombre del país com mayor cantidad de habitantes.*/

struct Pais{
    char nombre_pais[40];
    int cantidad_hab;
};

struct Pais primero_pais, segun_pais, tercer_pais;
struct Pais *ponteiro;
int contador = 1;

void mudarPonteiro(){
    if (contador == 1){
        ponteiro = &primero_pais;
    }
    else{
        if(contador == 2){
            ponteiro = &segun_pais;
        }
        else{
            if (contador == 3){
                ponteiro = &tercer_pais;
            }
        }
    }
}

void cargarValores(){
    do{
        mudarPonteiro();
        printf("\n Digite el nombre del pais: \n");
        scanf("%s", &(*ponteiro).nombre_pais);

        printf("\n Digite la cantidad de habitantes \n");
        scanf("%d", &(*ponteiro).cantidad_hab);
        contador++;
    }while(contador <= 3);
    contador = 1;
}

void printPais(){
    do{
        mudarPonteiro();
        printf("\nEl nombre del pais: %s", (*ponteiro).nombre_pais);
        printf("\nLa cantidad de habitantes: %d", (*ponteiro).cantidad_hab);
        contador++;

    }while(contador<=3);
    contador = 1;
}
void conMasHab(){
    struct Pais *armazena1, *armazena2, *armazena3;
    contador=1;

    mudarPonteiro();
    armazena1 = ponteiro;

    contador++;
    mudarPonteiro();
    armazena2 = ponteiro;

    contador++;
    mudarPonteiro();
    armazena3 = ponteiro;

    armazena1 = (*armazena1).cantidad_hab > (*armazena2).cantidad_hab ? armazena1 : armazena2;
    armazena1 = (*armazena1).cantidad_hab > (*armazena3).cantidad_hab ? armazena1 : armazena3;

    printf("\n El pais con mas habitantes es: %s \n", (*armazena1).nombre_pais);

}
int main(){

    cargarValores();
    printPais();
    conMasHab();
    return 0;
}
