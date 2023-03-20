/*
    Atividade 2 - Pedra, Papel, Tesoura
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void imprimirTesoura(){
    printf( " _  __ \n"
            "(_)/ / \n"
            "  / /  \n" 
            " / /_  \n" 
            "/_/(_) \n");
}

void imprimirPedra(){
    printf( "  ___  \n"
            " / _ \\ \n"
            "| | | |\n" 
            "| |_| |\n" 
            " \\___/ \n");
}

void imprimirPapel(){
    printf( " _______ \n"
            "| _   _ |\n"
            "| |   | |\n" 
            "| |   | |\n" 
            "| |   | |\n"
            "|_______|\n");
}

void imprimirOpcoes(){
    printf("\nEscolha uma jogada:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("\nEscolha: ");
}

void jogo(){
	
    int jogador;
    int computador;
    int ganhou = 0;
	int tentativas = 0;
    while (ganhou!=1){
	
    imprimirOpcoes();
    scanf("%i", &jogador);

    computador = rand() % 3 + 1;

    printf("O computador escolheu ");
    switch(computador) {
        case 1:
            printf("pedra.\n");
            imprimirPedra();
            break;
        case 2:
            printf("papel.\n");
            imprimirPapel();
            break;
        case 3:
            printf("tesoura.\n");
            imprimirTesoura();
            break;
    }

    printf("Você escolheu ");
    switch(jogador) {
        case 1:
            printf("pedra.\n");
            imprimirPedra();
            break;
        case 2:
            printf("papel.\n");
            imprimirPapel();
            break;
        case 3:
            printf("tesoura.\n");
            imprimirTesoura();
            break;
        default:
            printf("uma jogada inválida.\n");
    }

    if (jogador == computador) {
        printf("Empate!\n");
    } else if (jogador == 1 && computador == 3 ||
               jogador == 2 && computador == 1 ||
               jogador == 3 && computador == 2) {
        printf("Você ganhou!\n");
        ganhou = 1;
    } else {
        printf("Você perdeu!\n");
    }

    tentativas = tentativas + 1;
    if (ganhou==1)
    printf("\nvoce ganhou com %i tentativas",tentativas);

}
}

int main(){
	srand(time(NULL));
    jogo();
    return 0;
}
