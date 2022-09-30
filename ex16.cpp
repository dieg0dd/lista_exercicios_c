//Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.

#include <stdio.h>

int fatorial(int n){
    int i = n, fat, armaz = 0;

    for (fat = 1 ; n > 1; n--){
        fat *= n;
    }

    return fat;
}

int main() {
    int num, fator;

    printf("Digite um numero inteiro para calcular o Fatorial: ");
    scanf("%i", &num);

    fator = fatorial(num);

    printf("%i! = %i", num, fator);

    return 0;
}
