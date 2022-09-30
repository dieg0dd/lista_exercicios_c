#include <stdio.h>

int perfeito(int num){
    float n1;
    int i, result;

    for (i=1; i < num; i++)
        if (num % i == 0)
            n1 += i;

    if (n1 == num)
        result = 1;
    else
        result = 0;

    return result;
}

int main() {
    int numero, resultado;

    printf("Digite um numero para verificar se ele e perfeito: ");
    scanf("%i", &numero);

    resultado = perfeito(numero);

    if (resultado == 1)
        printf("O Numero %i e perfeito!", numero);
    else
        printf("O Numero %i nao e perfeito.", numero);

    return 0;
}