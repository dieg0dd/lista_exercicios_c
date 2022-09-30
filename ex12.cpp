//Faça um procedimento que recebe, por parâmetro, a hora de início e a hora de
//término de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos. O
//procedimento deve retornar, também por parâmetro, a duração do jogo em horas e
//minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas
//e pode começar em um dia e terminar no outro.

#include <stdio.h>

float duracao_jogo(float hr_comeco, float min_comeco, float hr_final, float min_final, float *jogo_hora, float *jogo_min){
    float v, c;

    v = hr_final - hr_comeco;
    c = min_final - min_comeco;

    if (hr_comeco > hr_final)
        v += 24;
    if (min_comeco > min_final)
        c = (min_final + 60) - min_comeco;

    *jogo_hora = v;
    *jogo_min = c;
}

int main() {
    float horas_i, min_i, horas_f, min_f, final_jogo, hrs_total, min_total;

    printf("Digite a hora e os minutos de inicio do Jogo (HH:MM): ");
    scanf("%f:%f", &horas_i, &min_i);
    printf("Agora, digite a hora e os minutos de termino do jogo (HH:MM): ");
    scanf("%f:%f", &horas_f, &min_f);

    final_jogo = duracao_jogo(horas_i, min_i, horas_f, min_f, &hrs_total, &min_total);

    printf("O Jogo durou de %2.f:%1.f as %1.f:%2.f\nUma duracao de %2.f horas e %1.f minutos", horas_i, min_i, horas_f, min_f,
           hrs_total, min_total);

}