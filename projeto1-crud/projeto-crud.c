/** @source: projeto crud simples
 * -----------------------------------------------
 * ---- BEM VINDO AO PROJETO 1 - CRUD SIMPLES ----
 * -----------------------------------------------
 * @author: Maurício Neto (maumneto@gmail.com - @maumneto)
 * Este projeto tem o objetivo de desenvolver um CRUD simples. CRUD é um acrônimo para:
 * - Create
 * - Read
 * - Update
 * - Delete
 * @note:
 * 1. O projeto CRUD serve para treinar os elementos básicos de C.
 * 2. Este projeto terá somente um único arquivo. Posteriormente é aconselhável dividir o projeto em múltiplos arquivos com estruturas independentes.
 * 3. Outra característica desse projeto é que todos os dados são armazenados em cache, ou seja, não esta sendo abordado o conteúdo de arquivos!
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <stdbool.h>
/**
 * @struct global para os dados de endereço e os dados do cliente 
*/
typedef struct
{
    char logradouro[40];
    int numero;
} endereco;

typedef struct
{
    char nome[30];
    int idade;
    long int cpf;
    endereco ender;

} dados_cliente;

/**
 * declaração das funções utilizadas na aplicação 
*/
void imprimir_tela_inicial(void);
void imprimir_tela_final(void);
void imprimir_escolha(void);
void criar_cad(int, dados_cliente *);
dados_cliente *buscar_cad(long int, int, dados_cliente *);
void mostrar_cad(int, dados_cliente *);
void update_cad(int, int, dados_cliente *);
dados_cliente *deletar(dados_cliente *);

/**
 * @function principal 
*/
int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");
    // dados_cliente *resp = NULL;
    dados_cliente *clientes = NULL;
    int num_registros, i, escolha;
    long int cpf_busca;

    imprimir_tela_inicial();
    do
    {
        printf("Quantos registros queres armazenar? ");
        scanf("%d", &num_registros);
        if (num_registros <= 0)
            printf("Entrada Inválida!\n");
    } while (num_registros <= 0);

    // alocando espaço para os "num_registros" clientes
    clientes = (dados_cliente *)calloc(num_registros, sizeof(dados_cliente));

    do
    {
        imprimir_escolha();
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            criar_cad(num_registros, clientes);
            break;
        case 2:
            printf("Qual o CPF do registro a ser buscado? ");
            scanf("%ld", &cpf_busca);
            buscar_cad(cpf_busca, num_registros, clientes);
            break;
        case 3:
            printf("Qual o CPF do registro a ser buscado? ");
            scanf("%ld", &cpf_busca);
            update_cad(cpf_busca, num_registros, clientes);
            break;
        case 4:
            mostrar_cad(num_registros, clientes);
            break;
        case 5:
            clientes = deletar(clientes);
            break;
        case 6:
            break;
        default:
            printf("Nenhum opção foi selecionada!\n");
        }
    } while (escolha < 6 && escolha > 0);
    
    deletar(clientes);
    imprimir_tela_final();
    return 0;
}

/** ***************************************
 *      implementação das funções         *  
******************************************* */
/**
 * @function imprimir_tela_inicial
 * @param [void]
 * 
 * @return [void]
*/
void imprimir_tela_inicial(void)
{
    printf(" *************************************** \n");
    printf(" **                                   ** \n");
    printf(" ** Bem vindo ao Projeto CRUD Simples ** \n");
    printf(" **                                   ** \n");
    printf(" *************************************** \n");
    printf("\n");
}
/**
 * @function imprimir_tela_final
 * @param [void]
 * 
 * @return [void]
*/
void imprimir_tela_final(void)
{
    printf("\n");
    printf(" *************************************** \n");
    printf(" **          Fim da Aplicação         ** \n");
    printf(" *************************************** \n");
    printf("\n");
}
/**
 * @function imprimir_escolha
 * @param [void]
 * 
 * @return [void]
*/
void imprimir_escolha(void)
{
    printf("\n *******       MENU      ******** \n");
    printf("Escolha uma das opções a seguir:\n");
    printf("1 - Cadastrar cliente\n2 - Buscar cadastro\n3 - Update cadastro\n");
    printf("4 - Mostrar cadastros\n5 - Deletar cadastro\n6 - Sair\n");
    printf("\nEscolha: ");
}
/**
 * @function criar_cad
 * função que cria os cadastros dos  clientes
 * @param [int] numero de registros
 * @param [dados_cliente] ponteiro com a referência dos clientes
 * 
 * @return [void]
*/
void criar_cad(int num_reg, dados_cliente *clientes)
{
    int i;
    for (i = 0; i < num_reg; i++)
    {
        setbuf(stdin, NULL);
        printf("Digite o nome [%d]: ", i + 1);
        scanf("%[^\n]s", (clientes + i)->nome);
        setbuf(stdin, NULL);
        printf("Digite o idade [%d]: ", i + 1);
        scanf("%d", &(clientes + i)->idade);
        printf("Digite o cpf [%d]: ", i + 1);
        scanf("%ld", &(clientes + i)->cpf);
        setbuf(stdin, NULL);
        printf("Digite o logradouro [%d]: ", i + 1);
        scanf("%[^\n]s", (clientes + i)->ender.logradouro);
        setbuf(stdin, NULL);
        printf("Digite o numero do endereço [%d]: ", i + 1);
        scanf("%d", &(clientes + i)->ender.numero);
        printf("\n");
    }
    if (clientes != NULL)
    {
        printf("Dados Incluídos com Sucesso!\n");
    }
    else
    {
        printf("Houve Algum Erro na Gravação dos Dados\n");
    }
    return;
}
/**
 * @function buscar_cad
 * função que busca um cadastro com base no cpf
 * @param [long int] cpf
 * @param [int] numero de registros
 * @param [dados_cliente] ponteiro para o vetor clientes
 * 
 * @return [dados_cliente] ponteiro para o cadastro buscado
*/
dados_cliente *buscar_cad(long int cpf, int num_reg, dados_cliente *clientes)
{
    dados_cliente *pont = NULL;
    int i, nao_achado = 0;
    for (i = 0; i < num_reg; i++)
    {
        if (cpf == (clientes + i)->cpf)
        {
            pont = (clientes + i);
            printf("\n");
            printf("CADASTRO ENCONTRADO!\n");
            printf("Nome: %s\n", pont->nome);
            printf("Idade: %d\n", pont->idade);
            printf("CPF: %ld\n", pont->cpf);
            printf("Logradouro: %s\n", pont->ender.logradouro);
            printf("Número: %d\n", pont->ender.numero);
            printf("\n");
            nao_achado = 0;
            return pont;
            break;
        }
        else
        {
            nao_achado = 1;
        }
    }
    if (nao_achado != 0)
    {
        printf("\nCadastro Não Encontrado no Sistema!\n");
        return NULL;
    }
    return pont;
}
/**
 * @function deletar
 * função que deleta os cadastros criados
 * @param [dados_cliente] ponteiro para o vetor clientes
 * 
 * @return [dados_cliente] ponteiro atualizado
*/
dados_cliente *deletar(dados_cliente *clientes)
{
    if (clientes == NULL)
    {
        printf("\nNão Há Nenhum Cadastro!\n");
    }
    else
    {
        clientes = NULL;
        if (clientes == NULL)
        {
            printf("\nDados Excluídos com Sucesso!\n");
        }
        else
        {
            printf("\nHouve Algum Problema no Exclusão dos Dados!\n");
        }
    }
    return clientes;
}
/**
 * @function mostrar_cad
 * função responsável por mostrar todos os cadastros armazenados
 * @param [int] número de registros criados
 * @param [dados_cliente] ponteiro com a referência ao vetor de dados de clientes
 * 
 * @return [void]
*/
void mostrar_cad(int num_reg, dados_cliente *clientes)
{
    if (clientes == NULL)
    {
        printf("\nNão há Cadastros Armazenados!\n");
        return;
    }
    else
    {
        int i;
        for (i = 0; i < num_reg; i++)
        {
            printf("\n");
            printf("Cadastro Número [%d]\n", i + 1);
            printf("Nome [%d]: %s\n", i + 1, (clientes + i)->nome);
            printf("Idade [%d]: %d\n", i + 1, (clientes + i)->idade);
            printf("CPF [%d]: %ld\n", i + 1, (clientes + i)->cpf);
            printf("Logradouro [%d]: %s\n", i + 1, (clientes + i)->ender.logradouro);
            printf("Número [%d]: %d\n", i + 1, (clientes + i)->ender.numero);
            printf("\n");
        }
    }
}
/**
 * @function update_cad
 * função responsável por atualizar os dados de um cadastro
 * @param [int] número do cpf de busca
 * @param [int] número de registros criados
 * @param [dados_cliente] ponteiro com o cadastro a ser utilizado
 * 
 * @return [void] 
*/
void update_cad(int cpf, int num_reg, dados_cliente *cliente)
{
    dados_cliente *pont = NULL;

    pont = buscar_cad(cpf, num_reg, cliente);
    if (pont == NULL)
    {
        printf("\nUsuário Não Existe!\n");
    }
    else
    {
        printf("Digite as Novas Informações deste Usuário!!\n");
        setbuf(stdin, NULL);
        printf("Nome: ");
        scanf("%[^\n]s", pont->nome);
        setbuf(stdin, NULL);
        printf("Idade: ");
        scanf("%d", &pont->idade);
        printf("CPF: ");
        scanf("%ld", &pont->cpf);
        setbuf(stdin, NULL);
        printf("Logradouro: ");
        scanf("%[^\n]s", pont->ender.logradouro);
        setbuf(stdin, NULL);
        printf("Número: ");
        scanf("%d", &pont->ender.numero);
        printf("\n");
    }
    return;
}