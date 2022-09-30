//Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o
//valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.

#include <stdio.h>

int calculo(int valor){
    int result, i, num;

    for (i=2 ; i <= valor / 2 ; i++)
        if (valor % i == 0){
            result++;
        }

    if (result == 0)
        num = 1;
    else
        num = 0;

    return num;
}

int main() {
    int n1, primo;

    printf("Digite um valor inteiro positivo: ");
    scanf("%i", &n1);

    primo = calculo(n1);

    if (primo == 1)
        printf("Esse numero e primo!");
    else
        printf("Numero nao primo.");

    return 0;
}