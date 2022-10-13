#include <stdio.h>
#include <stdlib.h>
#define TAMANHOVECTOR 5
struct Producto{

    int codigo;
    char description [41];
    float precio;

};

void cargarValores(struct Producto vec[TAMANHOVECTOR]){
    for (int i = 0; i < TAMANHOVECTOR; i++){
        printf("\n%d - Inserte el codigo del producto: ", i+1);
        scanf("%d", &vec[i].codigo);

        printf("%d - Inserte la description del producto: ", i+1);
        scanf("%s", &vec[i].description);

        printf("%d - Inserte el precio del producto: ", i+1);
        scanf("%f", &vec[i].precio);
    }
};

void imprimirValores(struct Producto vec[TAMANHOVECTOR]){
    for (int i = 0; i < TAMANHOVECTOR; i++){
        printf("\n");
        printf("\nCodigo del producto: %d\n", vec[i].codigo);
        printf("\nDescription del producto: %s\n", vec[i].description);
        printf("\nPrecio del producto: %.2f", vec[i].precio);
    }
}

void mayorPrecio(struct Producto vec[TAMANHOVECTOR]){
    int cargarposicion = 0;
    for(int i = 1; i < TAMANHOVECTOR; i++){
        if(vec[i].precio > vec[cargarposicion].precio){
            cargarposicion = i;
        }
    }
    printf("\n\t\tEl producto con mayor precio es(mas caro): %s\n", vec[cargarposicion].description);
}


int main(){
    struct Producto vector[TAMANHOVECTOR];
    cargarValores(vector);
    imprimirValores(vector);
    mayorPrecio(vector);
    return 0;
}
