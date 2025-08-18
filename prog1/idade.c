#include <stdio.h>

int main(){

int w;

printf("digite sua idade\n");
scanf("%d", &w);

switch(w/10){

case 0: case 1:
printf("bem vindo iniciante\n");
break;

case 2: case 3:
printf("bem vindo aprendiz\n");
break;

case 4: case 5:
printf("bem vindo veterano\n");
break;

default:
printf("bem vindo mestre\n");
}

return 0;
}
