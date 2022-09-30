#include <stdio.h>

float calculo (int);

int main() {
	int num;
	
	printf("Digite um numero para ser calculado: ");
	scanf("%i", &num);
	
	printf("Resultado: %.2f", calculo(num));
	
}

float calculo (int n){
	float i, s = 0;
	
	for (i=1; i<=n; i++){
		s += (i*i + 1) / (i + 3);
	}
	
	return s;
}