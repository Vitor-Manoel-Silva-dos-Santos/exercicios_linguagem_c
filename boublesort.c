#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void main (){
    char frase[100];
    int cuant;

    printf("Digite uma frase: \n");
    scanf("%s", &frase);
    cuant = strlen(frase);
    printf("%d", cuant);
    for (int i = 0; i <= cuant; i++){
            if (frase[i] == "a"){
                printf("igual");
            }
    }


            /*switch (frase[i]) {
            case "a":
                printf("e um a \n");
                break;
            case "b":
                printf("e um b \n");
                break;
            default :
                printf ("Valor invalido!\n");
            }
        }*/
    return 0;
}



/*void bouble_Sort(){
    int x1;
    int x0;
    int quant = 5;
    int x = 0;
    int vetor[5] = {2,1,3,5,4};
    for (x; x < quant;){

        for (x; x < quant; x++){
            if (vetor[x] > vetor[x+1]){
                x1 = vetor[x];
                printf("\n variavel suporte recebe: %d", x1);
                vetor[x] = vetor[x0];
                printf("\n o valor %d foi passado do vetor x0 para x ", vetor[x]);
                vetor[x0] = x1;
                printf("\n O vetor x0 recebeu a variavel suporte %d \n", vetor[x0]);
                break;
            }
        }
    }
    for (int y = 0; y < 5; y++){
        printf(" %d", vetor[y]);
    }

}*/
