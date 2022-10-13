#include <stdio.h>
#include <stdlib.h>
#define TAMANHOVEC 3

/*concepto de registro anidados, mejor dicho registro dentro de registro.

Tambiém hemos visto que podemos definir vectores y matrices cuyos elementos sean de tipo registro
En este concepto veremos que los campos de un registro pueden ser tambiem de tipo registro,
es decir anida un registro dentro de otro registro.

hagamos un registro que debe tener tres variables para simbolizar na fecha dia, mes y año. Entonces hacer otro
registro que debe tener codigo, description, precio y fechavencimiento añadido del registro de fecha.*/


struct Fecha{
    int dia;
    int mes;
    int ano;
};

struct Producto{
    int codigo;
    char description[41];
    float precio;
    struct Fecha fecha_vencimiento;
};
void cargarProducto(struct Producto vec(TAMANHOVEC)){
    for (int i = 0; i < TAMANHOVEC; i++){
        printf("\nIntroducir el codigo del producto: \n");
        scanf("%d", &vec[i].codigo);

        printf("\nIngrese la description del producto: \n");
        scanf("%s", &vec[i].description);

        printf("\nInsertar el precio del producto: \n");
        scanf("%f", &vec[i].precio);

        printf("\nIngrese el dia de vencimento: \n");
        scanf("%d", &vec[i].fecha_vencimiento.dia);

        printf("\nIngrese el mes de vencimento: \n");
        scanf("%d", &vec[i].fecha_vencimiento.mes);

        printf("\nIngrese el ano de vencimento: \n");
        scanf("%d", &vec[i].fecha_vencimiento.ano);
    }
}

void imprimirProducto(struct Producto vec[TAMANHOVEC]){
    for (int i = 0; i < TAMANHOVEC; i++){
        printf("\n%d \t %s \t %.2f \t %d/%d/%d\n", vec[i].codigo, vec[i].description, vec[i].precio, vec[i].fecha_vencimiento.dia, vec[i].fecha_vencimiento.mes, vec[i].fecha_vencimiento.ano);
    }
}

int main(){

    struct Producto vector[TAMANHOVEC];
    cargarProducto(vector);
    imprimirProducto(vector);
    return 0;
}
