#include <stdio.h>
#include <string.h>

int main(){
    int num = 0;
    int resultado = 0;
    printf("Digite um int: ");
    scanf("%d", &num);
    resultado = num + 9;
    printf("soma de %d com 9 = %d \n", num, resultado);

    return 0;
}
