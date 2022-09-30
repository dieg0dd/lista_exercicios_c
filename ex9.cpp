//Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar.
//A função deve retornar um valor booleano.

#include <stdio.h>

int impopar(int valor){

    if (valor % 2 == 0)
        return 1;
    else
        return 0;
}

int main(){
    int num, result;

    printf("Digite um numero para verificar se e Par ou Impar: ");
    scanf("%i", &num);

    result = impopar(num);

    if (result == 1)
        printf("O numero %i e Par!", num);
    else
        printf("O numero %i e Impar!", num);
}