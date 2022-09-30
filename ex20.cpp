//Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna
// o somatório desse valor.

#include <stdio.h>

int somatorio(int n){
	int i, soma = 0;
	
	if (n<0)
		return -1;
	
	for (i=0; i<=n ; i++){
		soma += i;
	}
	
	return soma;
}

int main() {
	int num1;
	
	printf("Digite um numero para verificar seu somatorio: ");
	scanf("%i", &num1);
	
	printf("O somatorio de %i sera igual a: %i", num1, somatorio(num1));
	
	return 0;
}