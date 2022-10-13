#include <stdio.h>
#include <stdlib.h>

/*declarar um registro que permita almacenar el codigo, description y precio de um producto.
Luego definir dos variables de dicho tipo, cagarlas e imprimir el nombre del producto que tiene mayor precio.*/

struct Productos{
    int codigo;
    char description[41];
    float precio;
};

struct Productos primero_producto, segun_producto;

float primera_carga(){

    printf("\nInsira el codigo del producto: \n");
    scanf("%d", &primero_producto.codigo);
    printf("\nInsira la description del producto: \n");
    scanf(" %s", &primero_producto.description);
    printf("\nInsira el precio del producto: ");
    scanf(" %f", &primero_producto.precio);

    return primero_producto.precio;
}

float segun_carga(){
    printf("\nInsira el codigo del producto: \n");
    scanf("%d", &segun_producto.codigo);
    printf("\nInsira la description del producto: \n");
    scanf(" %s", &segun_producto.description);
    printf("\nInsira el precio del producto: ");
    scanf(" %f", &segun_producto.precio);

    return segun_producto.precio;
}
void mayorPrecio(){
    float valor1, valor2;
    valor1 = primera_carga();
    valor2 = segun_carga();

    printf("El mayor valor es del producto: %s \n",valor1 > valor2 ? primero_producto.description : segun_producto.description);
}

int main(){
    mayorPrecio();
}
