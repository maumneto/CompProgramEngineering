/**
 * @name Jokenpo Simples!
 * @author Maurício Moreira Neto
 * Este projeto simula o jogo pedra-papel-tesoura
 * Desenvolvido orgulhosamente C.
 * */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() 
{
    setlocale(LC_ALL, "portuguese");
    int user, computer;
    time_t temp;

    // tela de inicial do jogo!
    system("clear");
    printf("-------------------------------------------- \n");
    printf("BEM VINDO AO JOGO PEDRA-PAPEL-TESOURA - PCE\n");
    printf("--------------------------------------------\n");
    printf("\n");

    // entrada da opção do usuário!
    do{
        printf("Escolha a Opção:\n[0]-Pedra\n[1]-Papel\n[2]-Tesoura\nJogador: ");
        scanf("%d", &user);
        if (user < 0 || user >2) 
        {
            printf("Escolha Errada!\n");
            printf("\n");
        }
    }while(user < 0 || user > 2);

    // gerar a opção do computador!
    srand((unsigned) &temp);
    computer = rand() % 3;
    
    printf("\n");
    printf("player --> %d\n", user);
    printf("computer --> %d\n", computer);
    printf("\n");

    // Implementando a lógica do jogo!
    if (user == 0)
    {
        if (computer == 0) 
        {
            printf("Empatou!\n");
        } 
        else if (computer == 1)
        {
            printf("Você Perdeu!\n");
        } 
        else
        {
            printf("Você Ganhou!\n");
        }
    }
    else if (user == 1)
    {
        if (computer == 0)
        {
            printf("Você Ganhou!\n");
        } 
        else if (computer == 1)
        {
            printf("Empatou!\n");
        } 
        else 
        {
            printf("Você Perdeu!\n");  
        }
    }
    else 
    {
        if (computer == 0)
        {
            printf("Você Perdeu!\n");
        } 
        else if (computer == 1)
        {
            printf("Você Ganhou!\n");
        }
        else
        {
            printf("Empatou!\n");
        }
    }

    printf("\n");
    printf("-------------------------------------------- \n");
    printf(" OBRIGADO POR JOGAR! VOLTE SEMPRE! \n");
    printf("--------------------------------------------\n");
    printf("\n");

    return EXIT_SUCCESS;
}