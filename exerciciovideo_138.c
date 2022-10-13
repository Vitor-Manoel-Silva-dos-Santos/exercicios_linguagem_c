/*hacer un estrutura de registro para almacenar libros, debe tener codigo, autor y titulo. Definir un vector de cuatro
elementos de tipo libro. Codificar las funciones:

1 - carga del vector
2- Listado completo
3- Ingrese por teclado un nombre de autor y luego mostrar todos los titulos de libros que
ha escrito o un mensaje si no tiene*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define TAMANHOVEC 4
struct Libro{
    int codigo;
    char titulo[41];
    char autor[41];
};
void cargarValores(struct Libro vec[TAMANHOVEC]){
    for (int i = 0; i < TAMANHOVEC; i++){
        printf("%d Cadastro: ", i+1);
        printf("\nIngrese el codigo del libro: \n");
        scanf("%d", &vec[i].codigo);
        printf("\nInsere el titulo del libro: \n");
        scanf("%s", &vec[i].titulo);
        printf("\nIngrese el autor del libro: \n");
        scanf("%s", &vec[i].autor);
    }
}
void imprimirValores(struct Libro vec[TAMANHOVEC]){
    for (int i = 0; i < TAMANHOVEC; i++){
        printf("\nEl codigo del libro: %d\n", vec[i].codigo);
        printf("\nEl titulo del libro: %s\n", vec[i].titulo);
        printf("\nEl autor del libro: %s\n", vec[i].autor);
    }
}

void localizarAutor(struct Libro vec[TAMANHOVEC]){
    char nombre_autor[41];
    int auxiliar = 0;
    printf("\nIngrese el nombre del autor que desea localizar: \n");
    scanf("%s", nombre_autor);
    for (int i = 0; i < TAMANHOVEC; i++){
        if (strcmp(nombre_autor,vec[i].autor) == 0){
            printf("\nEl autor %s ha escribido %s \n", nombre_autor, vec[i].titulo);
            auxiliar = 1;
        }
        else{
            if (i == TAMANHOVEC-1 && auxiliar == 0){
                printf("\nEl autor %s no ha escribido ningun libro\n", nombre_autor);
            }
        }
    }
}
int main(){
    struct Libro vector[TAMANHOVEC];
    cargarValores(vector);
    imprimirValores(vector);
    localizarAutor(vector);
    return 0;
}
