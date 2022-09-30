//Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou
//negativo. A função deve retornar um valor booleano.

#include <stdio.h>

int verificacao(int n){
    int valor;

    if (n >= 0)
        valor = 1;
    else
        valor = 0;

    return valor;
}

int main(){
    int numero, resultado;

    printf("Digite um numero para verificar se e Positivo ou Negativo: ");
    scanf("%i", &numero);

    resultado = verificacao(numero);

    if (resultado == 1)
        printf("O numero %i e positivo!", numero);
    else
        printf("o numero %i e negativo!", numero);

    return 0;

}