#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num = 0;
    int resto = 0;
    printf("Digite o numero para ver se e par ou impar: ");
    scanf("%d", &num);
    resto = num % 2;

    if (resto == 0) {
        printf("parabéns seu numero e par");
    }else{
        printf("que coisa e impar kkkkkkkkkkkkkkkkkkkkkkk");
    }

    return 0;
}
