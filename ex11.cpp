//Faça um procedimento que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em ordem crescente.

#include <stdio.h>

int ordenar(int a, int b, int c, int *n1, int *n2, int *n3){

    if (a > b) {
        if (a > c) {
            *n1 = a;
            if (b > c) {
                *n2 = b;
                *n3 = c;
            }
            else {
                *n2 = c;
                *n3 = b;
            }
        }
        else {
            *n1 = c;
            *n2 = a;
            *n3 = b;
        }
    }

    if (b > a) {
        if (b > c) {
            *n1 = b;
            if (a > c) {
                *n2 = a;
                *n3 = c;
            }
            else {
                *n2 = c;
                *n3 = a;
            }
        }
        else {
            *n1 = c;
            *n2 = b;
            *n3 = a;
        }
    }

    if (c > a) {
        if (c > b) {
            *n1 = c;
            if (a > b) {
                *n2 = a;
                *n3 = b;
            }
            else {
                *n2 = b;
                *n3 = a;
            }
        }
        else {
            *n1 = b;
            *n2 = c;
            *n3 = a;
        }
    }
}

int main() {
    int num1, num2, num3, menor, medio, maior, result;

    printf("Digite 3 numero para serem colocados em sequencia: ");
    scanf("%i %i %i", &num1, &num2, &num3);

    result = ordenar(num1, num2, num3, &maior, &medio, &menor);

    printf("---Ordem Crescente---\n%i\t%i\t%i", menor, medio, maior);
}