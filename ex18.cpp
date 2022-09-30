#include <stdio.h>

int taboada(int n){
    int i;

    for (i=1;i<=n;i++){
        printf("• %i x %i = %i\n", i, n, i*n);
    }
}

int main() {
    int n1, calc;

    printf("Digite um numero inteiro para ver a tabuada: ");
    scanf("%i", &n1);

    calc = taboada(n1);
}