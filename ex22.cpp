#include <stdio.h>

float fator(int);

int main() {
	int num;
	
	printf("Digite um numero, para calcular seu S: ");
	scanf("%i", &num);
	
	printf("Resultado = %.2f", fator(num));
	
	return 0;
}

float fator (int n){
	float s = 1, soma = 1;
	int i;
	
	for (i=1; i<=n; i++){
		soma = i*soma;
		s += 1/soma;
	}
	
	return s;
}