#include <stdio.h>

int main(){
	int a;
	int p, i=0;
	float n=0.0;
	float s=0.0;
	printf ("escreva o numero de notas:");
	scanf("%d", &a);
	//p= i+1;

	while (i<a){
		//p = i + 1;
		printf("escreva a nota %d:", i + 1);
		scanf("%f", &n);
		s=n+s;
		i++;
	}
	float m = s/a;

	printf("a média é %.2f\n", m); 
	return 0;
}
