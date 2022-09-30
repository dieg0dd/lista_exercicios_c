#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maior(int vet[], int i1) {
    int i, num_maior;

    num_maior = vet[0];

    for (i = 1; i < 50; i++)
        if (vet[i] > num_maior)
            num_maior = vet[i];

    return num_maior;
}
int menor(int vet[], int i1) {
    int i, num_menor;

    num_menor = vet[0];

    for (i=1;i<50;i++)
        if (vet[i] < num_menor)
            num_menor = vet[i];

    return num_menor;
}


int main() {
    int i, vet[50];

    srand(time(NULL));
    for (i=0;i<50;i++)
        vet[i] = rand() % 100;
    for (i=0;i<50;i++)
        printf("%i\n", vet[i]);

    printf("O maior e %i e o menor e %i", maior(vet, 50), menor(vet, 50));

    return 0;
}