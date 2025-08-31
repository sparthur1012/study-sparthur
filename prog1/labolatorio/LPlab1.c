// incluir bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// criando funções/comandos

//criar função para operações e definir variaveis
void calculadora (char operador[20], int num1, int num2){

    //receber primeiro número e atribuir ele ao int "num1"
    printf("primeiro numero: "); 
    scanf ("%d \n", &num1);

    //receber a operação e atribuir ele a char "operador"
    printf("defina a operação: soma(+), subtração(-), divisão(/) ou multiplicação(*) \n ou exit para sair \n"); 
    scanf ("%s \n", operador);
    
    //receber segundo número e atribuir ele ao int "num2"
    printf("qual o segundo número?"); 
    scanf ("%d \n", &num2);

    //criar um float para o resultado

    float resultado = 0.0;

    //comparar o operador com as respostas esperadas (strcmp) e realizar a operação atravéz disso
    //soma
    if (strcmp(operador, "+") == 0) {
        resultado = num1 + num2;
        printf("o resultado é %f \n", resultado);
    }

    //subtração
    else if (strcmp(operador, "-") == 0) {
        resultado = num1 - num2;
        printf("o resultado é %f \n", resultado);
    }

    //multiplicação
    else if (strcmp(operador, "*") == 0) {
        resultado = num1 * num2;
        printf("o resultado é %f \n", resultado);
    }

    //divisão
    else if (strcmp(operador, "/") == 0) {
        resultado = (float) num1 / num2;
        printf("o resultado é %f \n", resultado);
    }

    //sair
    else if (strcmp(operador, "exit") == 0) {
	    printf ("saindo");

    }

    //caso o usuario tenha digitado algo diferente
    else {
        printf ("Por Favor escolha uma das 4 operações (soma, subtração, divisão ou multiplicação) ou exit");
    }


}
//agora as funções para a agenda telefonica
//criar função para o nome
void nome(){
	//criar um ponteiro para uma string
	char nome [100];
	//pedir ao usuario para digitar o nome do contato
	printf ("digite o nome: ");
	scanf  ("%s", nome);


}

//Criar função para a agenda telefonica
void agenda (){
	//chamar a função nome
	void nome ();
	//chamar a função numero
	void numero();

}
// criar prompt de comando para interagir com o usuario usando as funções
//int main (void){

    //char comando [100000];
    //int a =10;
    //int result = 0;
        //while (1){
          //  printf ("myterm>");
            //scanf  ("%s", comando);
            //printf ("%s \n", comando);
           // if (strcmp(comando, "conta") == 0) {conta ();}
            //if (strcmp(comando, "agenda") == 0) {agenda ();}
            //if (strcmp(comando, "nome") == 0) {nome ();}
            //if (strcmp(comando, "telefone") == 0) {telefone ();}


//}
//}

