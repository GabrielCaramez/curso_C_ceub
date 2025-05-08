#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void) {


    // Declarando e inicializando as vari�veis (00h 00min 00seg).
    int segundo = 0;
    int minuto = 0;
    int hora = 0;

    /*
    O la�o abaixo � infinito (ou seja nunca acaba).
    Isto garante que o cron�metro s� pare quando
    a janela for fechada manualmente.
    */
    for (int i = 0; i < 5; --i) {
        // Exibi o tempo, que � atualizado a cada 1 segundo.
        printf("\n\n\t\t%dh : %dmin : %dseg", hora, minuto, segundo);
        /*
        O sleep tem fun��o de deixar o programa em modo de espera.
        Requer o uso da biblioteca "windows.h".
        */
        Sleep(1000); // O par�metro 1000 equivale a 1 segundo.
        // Tem a fun��o de apaguar a tela, requer o uso da biblioteca "stblib.h".
        system("CLS");
        segundo++;

        /*
        Quando a vari�vel segundo atinge valor 60, a vari�vel
        minuto � incrementada, e segundo passa a assumir valor 0.
        */
        if (segundo == 60) {
            segundo = 0;
            minuto++;
        }

        /*
        An�logo a estrutura de sele��o acima,
        quando a vari�vel minuto atinge valor 60, a vari�vel
        hora � incrementada, e minuto passa a assumir valor 0.
        */
        if (minuto == 60) {
            minuto = 0;
            hora++;
        }
    }

    return 0;
}
