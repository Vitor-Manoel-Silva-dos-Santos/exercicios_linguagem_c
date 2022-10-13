#include <stdio.h>
#include <stdlib.h>

/*plantear dos funciones, una que cargue los valores a las variables y otra funcion que imprima los valores de las variables en la
pantalla*/


struct Producto{
    int codigo;
    char description[41];
    float precio;
};

struct Producto cargar_valores(){
    struct Producto p;
    printf("\nIngrese el codigo del producto: \n");
    scanf("%d", &p.codigo);

    printf("\nIngres la description del producto: \n");
    scanf("%s", &p.description);

    printf("\nIngrese el precio del producto: \n");
    scanf("%f", &p.precio);

    return p;
};

void imprimir_pantalla(struct Producto v){
    printf("\n El codigo del producto: %d \nLa description del producto: %s \nEL precio del producto: %.2f", v.codigo,v.description,v.precio);
}

int main(){

    struct Producto Vaso;
    struct Producto Coche;

    Vaso = cargar_valores();
    Coche = cargar_valores();
    imprimir_pantalla(Vaso);
    imprimir_pantalla(Coche);

    return 0;
}
