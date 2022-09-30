//Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra.
// Se a letra for A, o procedimento calcula a média aritmética das notas do aluno,
// se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for H, a sua média harmônica.
// A média calculada também deve retornar por parâmetro.

#include <stdio.h>
#include <stdlib.h>

float media(float nota1, float nota2, float nota3, char tipo){
    float result;

    if (tipo == 'A' || tipo == 'a')
        result = (nota1 + nota2 + nota3) / 3;

    else if (tipo == 'P' || tipo == 'p')
        result = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 3;

    else if (tipo == 'H' || tipo == 'h')
        result = 3 / (1 / nota1 + 1 / nota2 + 1 / nota3);

    else{
        printf("Voce digitou o tipo de media errado. Reinicie o Programa e tente novamente.");
        return -1;
    }

    return result;
}

int main() {
    float n1, n2, n3, med;
    char medtipo;

    printf("Digite o valor das 3 notas que esse aluno recebeu: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Agora, digite qual media deseja calcular.\n(A) Media Aritmetica\n(P) Media Ponderada\n"
           "(H) Media Armonica\nDigite: ");
    scanf(" %c", &medtipo);

    med = media(n1, n2, n3,medtipo);

    if (medtipo == 'A' || medtipo == 'a')
        printf("\nA Media Aritmetica desse aluno e de: %f", med);
    else if (medtipo == 'P' || medtipo == 'p')
        printf("\nA Media Ponderada desse aluno e de: %f", med);
    else if (medtipo == 'H' || medtipo == 'h')
        printf("\nA Media Harmonica desse aluno e de: %f", med);


    return 0;
}