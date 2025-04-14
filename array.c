#include <stdio.h>

int main(){
    int vetor[3];
    printf("Digite o primeiro valor: \n");
    scanf("%d", &vetor[0]);
    printf("Digite o Segundo valor: \n");
    scanf("%d", &vetor[1]);
    printf("Digite o Terceiro valor: \n");
    scanf("%d", &vetor[2]);

    printf("O resultado foi %d %d %d \n", vetor[0], vetor[1], vetor[2]);
    return 0;
}
