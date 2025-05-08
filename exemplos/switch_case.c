#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, cal, resu =0;
    printf("Digite 1 para soma \n");
    printf("Digite 2 para suntração \n");
    printf("Digite 3 para divição \n");
    printf("Digite 4 para multiplicação ");
    scanf("%d", &cal);
    switch(cal){
    case 1:
    printf("Digite o primeiro numero \n");
    scanf("%d", &num1);
    printf("Digite o primeiro numero \n");
    scanf("%d", &num2);
    resu = num1 + num2;
    break;
case 2:
    printf("Digite o primeiro numero \n");
    scanf("%d", &num1);
    printf("Digite o primeiro numero \n");
    scanf("%d", &num2);
    resu = num1 - num2;
    break;
case 3:
    printf("Digite o primeiro numero \n");
    scanf("%d", &num1);
    printf("Digite o primeiro numero \n");
    scanf("%d", &num2);
    resu = num1 / num2;
    break;
case 4:
    printf("Digite o primeiro numero \n");
    scanf("%d", &num1);
    printf("Digite o primeiro numero \n");
    scanf("%d", &num2);
    resu = num1 * num2;
    break;
default:
    printf("sorry dont suport yuor number \n");
    }
    printf("O resultado da sua operação foi: %d \n", resu);
    return 0;
}
