#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void) {


    // Declarando e inicializando as variáveis (00h 00min 00seg).
    int segundo = 0;
    int minuto = 0;
    int hora = 0;

    /*
    O laço abaixo é infinito (ou seja nunca acaba).
    Isto garante que o cronômetro só pare quando
    a janela for fechada manualmente.
    */
    for (int i = 0; i < 5; --i) {
        // Exibi o tempo, que é atualizado a cada 1 segundo.
        printf("\n\n\t\t%dh : %dmin : %dseg", hora, minuto, segundo);
        /*
        O sleep tem função de deixar o programa em modo de espera.
        Requer o uso da biblioteca "windows.h".
        */
        Sleep(1000); // O parâmetro 1000 equivale a 1 segundo.
        // Tem a função de apaguar a tela, requer o uso da biblioteca "stblib.h".
        system("CLS");
        segundo++;

        /*
        Quando a variável segundo atinge valor 60, a variável
        minuto é incrementada, e segundo passa a assumir valor 0.
        */
        if (segundo == 60) {
            segundo = 0;
            minuto++;
        }

        /*
        Análogo a estrutura de seleção acima,
        quando a variável minuto atinge valor 60, a variável
        hora é incrementada, e minuto passa a assumir valor 0.
        */
        if (minuto == 60) {
            minuto = 0;
            hora++;
        }
    }

    return 0;
}
