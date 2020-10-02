/**
 * @name Jokenpo Final!
 * @author Maurício Moreira Neto
 * Este projeto simula o jogo pedra-papel-tesoura
 * Desenvolvido orgulhosamente C.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stdbool.h>

// variáveis globais
int scoreUser = 0;
int scoreComputer = 0;

// declaração de funções
void startScreen(void);
void endScreen(void);
void countScore(int *);
void verifyScore(int, int);
void toUpperCase(char *);
void jankenponLogic(char *, char *);
int verifyingString(char *);

int main()
{
    int user, computer, verify_string;
    char optionUser[20], optionComputer[20];
    char listOptions[3][20] = {"PAPEL","PEDRA","TESOURA"};
    char option;

    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    startScreen();
    do
    {
        do
        {
            // entrada da opção do usuário!
            printf("Escolha a Opção:\nPedra\nPapel\nTesoura\nJogador: ");
            setbuf(stdin, NULL);
            scanf("%s", optionUser);
            toUpperCase(optionUser);

            verify_string = verifyingString(optionUser);
            if (verify_string != 0)
            {
                printf("Entrada Errada!\n");
                printf("\n");
            }

        } while (verify_string != 0);

        printf("\n");
        computer = rand() % 3;
        strcpy(optionComputer, listOptions[computer]);
        
        printf("Jan...\n");
        sleep(1);
        printf("Ken...\n");
        sleep(1);
        printf("Po!!\n");
        sleep(1);
        printf("\n");

        printf("Jogador --> %s\n", optionUser);
        printf("Computador --> %s\n", optionComputer);

        jankenponLogic(optionUser, optionComputer);
        printf("\n");

        printf("Você quer jogar novamente? [s/n]: ");
        scanf("%s", &option);
        option = toupper(option);
        if (option == 'S')
        {
            system("clear");
        }
    } while (option == 'S');

    printf("COMPUTADOR --> %d Pontos\n", scoreComputer);
    printf("JOGADOR --> %d Pontos\n", scoreUser);
    
    // verificar quem venceu
    verifyScore(scoreUser, scoreComputer);
    // tela final
    endScreen();

    return EXIT_SUCCESS;
}

// --------------------------------------------------
void startScreen(void)
{
    // system("clear");
    printf("--------------------------------------------------- \n");
    printf("BEM VINDO AO JOGO PEDRA-PAPEL-TESOURA - PCE 2020.1 \n");
    printf("--------------------------------------------------- \n");
    printf("\n");
}

// --------------------------------------------------
void endScreen(void)
{
    printf("\n");
    printf("-------------------------------------------- \n");
    printf(" OBRIGADO POR JOGAR! VOLTE SEMPRE! \n");
    printf("--------------------------------------------\n");
    printf("\n");
}

// --------------------------------------------------
void jankenponLogic(char opUsr[], char opComp[])
{
    if (strcmp(opUsr,"PAPEL") == 0) 
    {
        if (strcmp(opComp,"TESOURA") == 0)
        {
            printf("VOCÊ PERDEU ESSA PARTIDA!");
            countScore(&scoreComputer);
        }
        else if (strcmp(opComp,"PEDRA") == 0)
        {
            printf("VOCÊ GANHOU ESSA PARTIDA!");
            countScore(&scoreUser);
        }
        else
        {
            printf("EMPATOU!");
        }
    }
    else if (strcmp(opUsr,"TESOURA") == 0)
    {
        if (strcmp(opComp,"PAPEL") == 0)
        {
            printf("VOCÊ GANHOU ESSA PARTIDA!");
            countScore(&scoreUser);
        }
        else if (strcmp(opComp,"PEDRA") == 0)
        {
            printf("VOCÊ PERDEU ESSA PARTIDA!");
            countScore(&scoreComputer);            
        }
        else
        {
            printf("EMPATOU!");
        }
    }
    else
    {
        if (strcmp(opComp,"TESOURA") == 0)
        {
            printf("VOCÊ GANHOU ESSA PARTIDA!");
            countScore(&scoreUser);
        }
        else if (strcmp(opComp,"PAPEL") == 0)
        {
            printf("VOCÊ PERDEU ESSA PARTIDA!");
            countScore(&scoreComputer);            
        }
        else
        {
            printf("EMPATOU!");
        }
    }
}


//-------------------------------------------------- 
void countScore(int *score)
{
    *score = *score + 1;
}

//--------------------------------------------------
void verifyScore(int scoreUser, int scoreComputer)
{
    if (scoreUser > scoreComputer)
    {
        printf("Você GANHOU o jogo!");
    }
    else if (scoreComputer > scoreUser)
    {
        printf("Você PERDEU o jogo!");
    }
    else
    {
        printf("Você EMPATOU no jogo!");
    }
    
}

//--------------------------------------------------
void toUpperCase(char word[])
{
    int c = 0;
    while (word[c] != '\0')
    {
        if (word[c] >= 'a' && word[c] <= 'z')
        {
            word[c] = (char) word[c] - 32;
        }
        c++;
    }
    word[c] = '\0';
    return;
}

// -------------------------------------------------
int verifyingString(char option[])
{
    int flag = 1;
    if (strcmp(option, "PAPEL") == 0|| strcmp(option, "PEDRA") == 0 || strcmp(option, "TESOURA") == 0) {
        flag = 0;
    }
    return flag;
}