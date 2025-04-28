#include <stdio.h>

int main() {
    int notas[6];
    int i;

    // Preenchendo o array
    printf("Digite 6 notas:\n");
    for(i = 0; i < 6; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    // Imprimindo apenas os valores pares
    printf("\nNotas pares:\n");
    for(i = 0; i < 6; i++) {
        if(notas[i] % 2 == 0) {
            printf("%d ", notas[i]);
        }
    }

    printf("\n");
    return 0;
}
