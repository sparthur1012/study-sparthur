// =================================================================
// VERSÃO COMPLETA USANDO APENAS SCANF DE FORMA SEGURA
// =================================================================
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Protótipos das funções
void calc();
void cadastrar_na_agenda();

// Função para limpar o buffer de entrada (essencial para scanf em loops)
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função main
int main (void){
    char comandos[100];

    while (1){
        printf("myterm> ");
        
        // 1. LER O COMANDO COM SCANF DE FORMA SEGURA
        //    %99s previne buffer overflow.
        if (scanf("%99s", comandos) != 1) {
            // Se scanf falhar (ex: usuário pressionou Ctrl+D), sai do programa.
            break;
        }

        // 2. LIMPAR O RESTO DA LINHA DO BUFFER
        //    Isso remove o '\n' e qualquer outra coisa que o usuário digitou
        //    depois do primeiro comando (ex: "calc 1 2 3")
        limpar_buffer();
           
        if (strcmp(comandos, "calc") == 0) {
            calc();
        } else if (strcmp(comandos, "agenda") == 0) {
            cadastrar_na_agenda();
        } else if (strcmp (comandos, "exit") == 0) {
            break; // Sai do loop principal
        } else {
             printf("Comando '%s' desconhecido.\n", comandos);
        }
    }
    printf("Terminal encerrado.\n");
    return 0;
}

void calc() {
    char operador[10];
    int num1, num2;
    float resultado;

    printf("\n--- Calculadora ---\n");
    printf("Defina a operacao (+, -, *, /): "); 
    scanf("%9s", operador); // Lê o operador
    
    printf("Primeiro numero: "); 
    scanf("%d", &num1); // Lê o primeiro número
    
    printf("Segundo numero: "); 
    scanf("%d", &num2); // Lê o segundo número
    
    // Limpa o buffer UMA VEZ no final, antes de retornar ao main.
    limpar_buffer();

    if (strcmp(operador, "+") == 0) {
        resultado = (float) num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (strcmp(operador, "-") == 0) {
        resultado = (float) num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (strcmp(operador, "*") == 0) {
        resultado = (float) num1 * num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (strcmp(operador, "/") == 0) {
        if (num2 == 0) {
            printf("Erro: Divisao por zero!\n");
        } else {
            resultado = (float) num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        }
    } else {
        printf("Operador invalido.\n");
    }
    printf("Retornando ao terminal principal...\n");
}

void cadastrar_na_agenda(){
    char nome[100];
    char telefone[20];
    
    printf("\n--- Agenda ---\n");
    printf("Digite o nome do contato: ");
    scanf("%99s", nome);
    
    printf("Digite o número do contato: ");
    scanf("%19s", telefone);

    // Limpa o buffer no final para não afetar o loop do main.
    limpar_buffer();
    
    printf("Contato Salvo: Nome: %s (Tel: %s)\n", nome, telefone);
    printf("Retornando ao terminal principal...\n");
}

