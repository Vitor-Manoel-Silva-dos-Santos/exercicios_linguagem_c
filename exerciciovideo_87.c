
/*Hacer un program que pida dos valores, los sumen y luego pida mas dos valores y sumenlos

hacer tambien una funcion de linea separadora que deve ser encrementada para cada ejecucion*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    sumaValores();
    lineaSeparadora();
    sumaValores();
    getch();
    return 0;
}

void sumaValores(){
    int valor1, valor2, suma;
    printf("Introduce un valor entero: \n");
    scanf("%i", &valor1);
    printf("Introduce otro valor entero: \n");
    scanf("%i", &valor2);

    suma = valor1 + valor2;
    prinf("La suma de los valores %i + %i es %i. \n", valor1, valor2, suma);

}
void lineaSeparadora(){
    printf("___________________________________________________________________________________________________ \n");
}


