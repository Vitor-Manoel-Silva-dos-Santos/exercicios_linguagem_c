#include <stdio.h>
#include <stdlib.h>

struct Pais{
    char nombre [41];
    int cuant_hab;
};



void imprimir_pais(struct Pais p){
    printf("El pais de hoy es %s con %d habitantes \n", p.nombre, p.cuant_hab);

}


int main(){
    struct Pais Brasil = {"Brasil", 4000000};
    imprimir_pais(Brasil);
    return 0;
}
