//Faça um procedimento que recebe por parâmetro os valores necessários para o cálculo
//da fórmula de báskara e retorna, também por parâmetro, as suas raízes, caso seja
//possível calcular.

#include <stdio.h>
#include <math.h>

float calc_baskara(float a, float b, float c, float *x1, float *x2){
    float delta;


    delta = b*b - 4*a*c;

    if (delta < 0)
        return -1;

    *x1 = (-b + sqrt(delta)) / (2*a);
    *x2 = (-b - sqrt(delta)) / (2*a);

    return 0;
}

int main(){
    float x, y, z, calculo, r1, r2;

    printf("Digite para o caluco de Bhaskara os valores respectivamente de A, B e C: ");
    scanf("%f %f %f", &x, &y, &z);

    calculo = calc_baskara(x, y, z, &r1, &r2);

    if (calculo == -1)
        printf("Erro: Delta menor que 0.");
    else
        printf("---Valor das Raizes---\nX1: %.2f\nX2: %.2f", r1, r2);

    return 0;
}