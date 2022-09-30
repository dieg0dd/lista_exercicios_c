#include <stdio.h>

int funcao(int, int);

int main(){
	int n1, n2;
	
	printf("Digite dois valores para serem calculados: ");
	scanf("%i %i", &n1, &n2);
	
	printf("Resultado: %i", funcao(n1, n2));
}

int funcao(int x, int z){
	int s = 1;
	int i;
	
	for (i=1;i<=z;i++)
		s *= x;
	
	return s;
	
}