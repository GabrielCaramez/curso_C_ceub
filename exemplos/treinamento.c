#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int aaa = 0;
    printf("Digite um n�mero: ");
    scanf("%d", &aaa);
    if (aaa > 5){
        printf("%d e maior que 5. ", aaa);
    }else{
        printf("%d e menor que 5. ", aaa);
    }

    return 0;
}
