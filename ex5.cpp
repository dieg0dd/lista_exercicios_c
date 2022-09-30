//Faça uma função que recebe por parâmetro o tempo de duração de uma fábrica expressa
//em segundos e retorna também por parâmetro esse tempo em horas, minutos e segundos.

#include <stdio.h>

float duracao(float segs, float *horas, float * minutos, int *segundos){
    float valor;

    *horas = segs / 3600 ;
    *minutos = segs / 60;
    *segundos = segs;
}

int main(){
    int seg, s;
    float conversao, h, m;

    printf("Digite o tempo de duracao da fabrica expressa: ");
    scanf("%i", &seg);

    conversao = duracao(seg, &h, &m, &s);

    printf("Horas: %.2f\nMinutos: %.2f\nSegundos: %i", h, m, s);

    return 0;

}