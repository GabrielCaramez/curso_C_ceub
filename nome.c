#include <stdio.h>
#include <string.h> // Para usar strlen

int main() {
    char nome[100];

    printf("Ola irmao, poderia me falar seu nome por favor: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o '\n' do final, se existir
    nome[strcspn(nome, "\n")] = 0;

    printf("%s, ola!\n", nome);
    return 0;
}

