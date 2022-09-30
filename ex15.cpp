//Faça uma função que leia um número não determinado de valores positivos e retorna a média aritmética dos mesmos.

#include <stdio.h>

float media(){
    float num = 1, soma, qtd_n = 0, media_a;

    while (num != 0){
        printf("Digite um numero positivo (Caso queira parar, digite 0): ");
        scanf("%f", &num);

        if (num < 0)
            return -1;

        soma += num;
        qtd_n++;
    }

    media_a = soma/(qtd_n - 1);

    return media_a;
}

int main () {
    float med;

    med = media();

    printf("A media equivale a %.2f", med);

    return 0;
}