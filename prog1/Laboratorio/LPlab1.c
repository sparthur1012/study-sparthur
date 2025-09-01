// incluir bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// criando funções/comandos

//criar função para operações e definir variaveis
void conta(char operador, int num1, int num2){

    //receber primeiro número e atribuir ele ao int "num1"
    printf("primeiro numero: "); 
    scanf ("%d \n", &num1);

    //receber a operação e atribuir ele a char "operador"
    printf("defina a operação: soma, subtração, divisão ou multiplicação"); 
    scanf ("%f \n", operador);
    
    //receber segundo número e atribuir ele ao int "num2"
    printf("qual o segundo número?"); 
    scanf ("%d \n", &num2);

    //criar um float para o resultado

    float resultado = 0.0

    //comparar o operador com as respostas esperadas (strcmp) e realizar a operação atravéz disso
    if (strcmp(operador, "soma") == 0) {
        num1 + num2 = resultado;
        printf("o resultado é %f \n", &resultado);
    }

    else if (strcmp(operador, "subtração") == 0) {
        num1 - num2 = resultado;
        printf("o resultado é %f \n", &resultado);
    }

    else if (strcmp(operador, "multiplicação") == 0) {
        num1 * num2 = resultado;
        printf("o resultado é %f \n", &resultado);
    }

    else if (strcmp(operador, "divisão") == 1) {
        (float) num1 / num2 = resultado;
        printf("o resultado é %f \n", &resultado);
    }

    else {
        printf ("Por Favor escolha uma das 4 operações: soma, subtração, divisão ou multiplicação");
    }


}

//criar uma função para a agenda
void agenda(char nome[100], char telefone [10]){
    //pedir para o usuario digitar o nome
    printf("digite o nome do contato: ");
    scanf("%s \n", nome);
    //pedir para o usuario digitar o numero
    printf("digite o número do contato: ");
    scanf("%s \n", telefone);
    //mostrar ao usuario a agenda e o nome
    printf("Contato Salvo: Nome: %s ( Tel: %s) \n", nome, telefone);


}
//criar prompt de comando para interagir com o usuario usando as funções
int main (void){

    char comando [100000];
    //int a =10;
    //int result = 0;
    while (1){
           printf ("myterm>");
           scanf  ("%s", comando);
           printf ("%s \n", comando);
           if (strcmp(comando, "conta") == 0) {conta ();}
           if (strcmp(comando, "agenda") == 0) {agenda ();}
    }
}

//}
//}

