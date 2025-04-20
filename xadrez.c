#include <stdio.h>


int main() {

    int torre = 1; //Variável e posição inicial da torre

    while (torre <= 5) //Posição final da torre
    {
        printf("Movimento da Torre: Direita\n");
        torre++;
    }


    printf("\n"); //Espaçamento entre o movimento das peças diferentes para deixar mais organizado


    int bispo = 1; //Variável e posição inicial do bispo

    do {
        printf("Movimento do Bispo: Cima Direita\n");
        bispo++;

    } while (bispo <= 5); //Posição final do bispo


    printf("\n"); //Espaçamento entre o movimento das peças diferentes para deixar mais organizado


    int rainha; //Variável da rainha

    for (rainha = 1; rainha <= 8; rainha++) //Posição inicial e final da rainha, respectivamente
    {
        printf("Movimento da Rainha: Esquerda\n");
    }


    printf("\n"); //Espaçamento entre o movimento das peças diferentes para deixar mais organizado


    int cavaloVertical, cavaloHorizontal; //Variáveis do cavalo

    for(cavaloHorizontal = 1; cavaloHorizontal < 2; cavaloHorizontal++) //Movimento horizontal do cavalo
    {

        while (cavaloVertical < 2) //Movimento vertical do cavalo
        {
            printf("Movimento do vertical cavalo: Baixo\n");
            cavaloVertical++;
        }

        printf("Movimento horizontal do cavalo: Esquerda\n");
    }


    return 0;
}
