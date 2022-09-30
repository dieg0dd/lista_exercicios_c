#include <stdio.h>

int divisores(int n){
    int i, cont = 0;

    for (i = 1; i <= n ; i++)
        if (n % i == 0)
            cont++;

    return cont;
}

int main() {
    int n1, calc;

    printf("Digite um numero para saber quantos divisores tem: ");
    scanf("%i", &n1);

    calc = divisores(n1);

    printf("O numero %i tem %i divisores.", n1, calc);

    return 0;
}