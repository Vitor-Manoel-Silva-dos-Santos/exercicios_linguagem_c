#include <stdio.h>
#include <stdlib.h>
/*Asignar valores al registro y hacer una funcion que imprima en la pantalla las informaciones del registo, la fucion debe recibir los
valores del registro*/
struct Producto{
    int codigo;
    char description[41];
    float precio;
};



void imprimirProducto(struct Producto exemple){
    printf("El codigo del producto: %d \nLa description del producto: %s \nEl precio del producto: %.2f \n", exemple.codigo, exemple.description, exemple.precio);
}

int main(){
    struct Producto Copo = {7889, "esdevidro", 12.75}; // Nueva forma de declarar un tipo struct

    /*Copo.codigo = 7889;
    strcpy(Copo.description, "esdevidro");
    Copo.precio = 12.75;*/
    imprimirProducto(Copo);
    return 0;
}






















