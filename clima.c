#include <stdio.h>

int main() {
    float temperatura;

    // Solicita ao usuário a temperatura
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);

    // Classifica o clima usando if, else if, else
    if (temperatura > 30) {
        printf("Clima quente\n");
    } else if (temperatura >= 20 && temperatura <= 30) {
        printf("Clima agradavel\n");
    } else {
        printf("Clima frio\n");
    }

    return 0;
}
