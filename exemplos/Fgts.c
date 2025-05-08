#include <stdio.h>

int main(){
    float fgts = 0.0;
    float salario = 0.0;
    printf("digite seu salario: ");
    scanf("%f", &salario);
    fgts = salario * 0.08;
    printf("Valor do FGTS: %.2f \n", fgts);
    return 0;
}
