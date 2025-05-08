#include <stdio.h>

int main(){
    float variavel = 0.0;
    float multiplicar = 0.0;

    printf("Digite um numero float: ");
    scanf("%f", &variavel);
    multiplicar = variavel * 2;
    printf("%.2f", multiplicar);
    return 0;
}
