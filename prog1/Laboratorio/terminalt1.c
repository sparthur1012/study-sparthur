//nosso objetivo é criar um terminal utilizando o C
// incluir bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//area para definir variaveis universais
define char comandos[100];


// criando funções/comandos

//criar função para operações e definir variaveis
void conta(char operador[100], int num1, int num2){

    //receber a operação e atribuir ele a char "operador"
    printf("defina a operação: soma(+), subtração(-), divisão(/) e multiplicação(*)"); 
    scanf ("%f \n", operador);
    
    //receber primeiro número e atribuir ele ao int "num1"
    printf("primeiro número: "); 
    scanf ("%d \n", &num1);
    
    //receber segundo número e atribuir ele ao int "num2"
    printf("qual o segundo número?"); 
    scanf ("%d \n", &num2);

    //criar um float para o resultado

    float resultado = 0.0

    //comparar o operador com as respostas esperadas (strcmp) e realizar a operação atravéz disso
    if (strcmp(operador, "+") == 0) {
        resultado = (float) num1 + num2;
        printf("o resultado é %f \n", &resultado);
    }

    else if (strcmp(operador, "-") == 0) {
        resultado = (float) num1 - num2;
        printf("o resultado é %f \n", &resultado);
    }

    else if (strcmp(operador, "*") == 0) {
        resultado = (float) num1 * num2 ;
        printf("o resultado é %f \n", &resultado);
    }

    else if (strcmp(operador, "/") == 1) {
        resultado = (float) num1 / num2;
        printf("o resultado é %f \n", &resultado);
    }
    
    else if (strcmp(operador, "exit") == 1) {
        break
    }

    else {
        printf ("Por Favor escolha uma das 4 operações: soma(+), subtração(-), divisão(/) ou multiplicação(*)");
    }


}

//criar uma função para a agenda
void cadastrar_na_agenda(char nome[100], char telefone [10]){
    //pedir para o usuario digitar o nome
    printf("digite o nome do contato: ");
    scanf("%s \n", nome);
    //pedir para o usuario digitar o numero
    printf("digite o número do contato: ");
    scanf("%s \n", telefone);
    //mostrar ao usuario a agenda e o nome
    printf("Contato Salvo: Nome: %s (Tel: %s) \n", nome, telefone);


}
//criar prompt de comando para interagir com o usuario usando as funções
int main (void){

    //int a =10;
    //int result = 0;
    while (1){
           printf ("myterm>");
           if(fgets (comandos, sizeof(comandos), stdin) == NULL;) {
               break;
           }
           comandos[strcspn (comandos, "\n")] = 0,
           
           printf ("%s \n", comandos);
           if (strcmp(comando, "conta") == 0) {conta ();}
           if (strcmp(comando, "agenda") == 0) {agenda ();}
    }
}
