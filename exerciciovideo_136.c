#include <stdio.h>
#include <stdlib.h>
/*Definir tres variables de tipo punto y cargarlas llamando a una funcion que retorne valores de tipo punto.

finalmente crear otra función que imprima en que cuadrante se encuentra cada punto (tener en cuenta que si
x > 0 y Y > 0 entonces x, y se encuentra en el primer cuadrante, si x < 0 y Y>0 se encuentra en el segundo
cuadrante y asi sucesivamente.*/

struct Punto{

    int x;
    int y;
};

struct Punto cargarValores(){
    struct Punto p;
    printf("\nInserte el primer valor: \n");
    scanf("%d", &p.x);

    printf("\nInserte el segundo valor: \n");
    scanf("%d", &p.y);

    return p;
};

void imprimirValores(struct Punto v){
    if (v.x > 0 && v.y > 0){
        printf("\n\nLos valores x,y (%d,%d) se encuentran en el primer cuadrante. \n", v.x,v.y);
    }
    else{
        printf("\n\nLos valores x,y (%d,%d) se encuentran en el segundo cuadrante. \n", v.x, v.y);
    }

}

int main(){

    struct Punto primer, segun;

    primer = cargarValores();
    segun = cargarValores();

    imprimirValores(primer);
    imprimirValores(segun);

    return 0;
}
