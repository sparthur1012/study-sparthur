//nosso objetivo é criar um terminal utilizando o C
// incluir bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//area para definir variaveis universais
char comand[100];

//criar prompt de comando para interagir com o usuario usando as funções
int main (void){

    //int a =10;
    //int result = 0;
    while (1){
           printf ("myterm>");
           if(scanf ("%99s", comand) != 1) {break;}
           
	   clean_buffer ();
           
           if (strcmp(comand, "calc") == 0) {calc();}
           if (strcmp(comand, "agenda") == 0) {agenda ();}
           if (strcmp (comand, "exit") == 0){return 0;}
        }}
        
    // criando funções/comand
// Função para limpar o buffer de entrada (corrigindo bugs de terminal)
void clean_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);}

//criar função para operações e definir variaveis
void calc(){
    while (1){
    //declarar variaveis da calculadora
    char operador[10];
    int num1, num2;
    float resultado = 0.0;

    //receber a operação e atribuir ele a char "operador"
    printf("defina a operação (soma(+), subtração(-), divisão(/) e multiplicação(*)): \n"); 
    scanf ("%s", operador);

    //verificar se o usuário deseja sair
    if (strcmp(operador, "exit") == 0) {break;}

     //receber primeiro número e atribuir ele ao int "num1"
    printf("primeiro número: "); 
    scanf ("%d", &num1);
    clean_buffer();
    
    //receber segundo número e atribuir ele ao int "num2"
    printf("segundo número: "); 
    scanf ("%d", &num2);
    clean_buffer();

    //comparar o operador com as respostas esperadas (strcmp) e realizar a operação atravéz disso
    if (strcmp(operador, "+") == 0) {
        resultado = (float) num1 + num2;
        printf("o resultado é %f \n", resultado);}
    
    else if (strcmp(operador, "-") == 0) {    
        resultado = (float) num1 - num2;
        printf("o resultado é %f \n", resultado);}

    else if (strcmp(operador, "*") == 0) {
        resultado = (float) num1 * num2 ;
        printf("o resultado é %f \n", resultado);}

    else if (strcmp(operador, "/") == 0) {
        resultado = (float) num1 / num2;
        printf("o resultado é %f\n", resultado);}

    else {printf ("Por Favor escolha uma das 4 operações: soma(+), subtração(-), divisão(/) ou multiplicação(*)");}}}

//criar uma função para a agenda
void agenda(){
    

    //criar uma função para salvar os contatos em um arquivo de texto
    void criar_contato(){

        while (1)
    {
      //pedir para o usuario digitar o nome
    char nome[100];
    char telefone[10];
    
    printf("digite o nome do contato: ");
    scanf("%s", nome);
    clean_buffer();
    if (strcmp(nome, "exit") == 0){break;}
    
    //pedir para o usuario digitar o numero
    printf("digite o número do contato: ");
    scanf("%s", telefone);
    clean_buffer();

    //criar um arquivo para a agenda
    FILE *arquivoagenda;
        //abrir o arquivo em modo de anexação
        arquivoagenda = fopen("arquivoagenda.txt", "a");
        //verificar se o arquivo foi aberto corretamente
        if (arquivoagenda == NULL){
            //avisar o usuario em caso de erro
            printf ("erro ao abrir a agenda");
            return;
        }
        //salvar o contato no arquivo
        fprintf(arquivoagenda, "Nome: %s Tel: %s\n", nome, telefone);
        fclose(arquivoagenda);

    //mostrar ao usuario a agenda e o nome
    printf("Contato Salvo (Nome: %s Tel: %s)\n", nome, telefone);
    }

    void ler_agenda()
}