#include <stdio.h>

struct informacoes{
    float salario;
    float filhos;
    float salario_maior;
    float porcentagem;

};

struct informacoes func(int x){
    float sal = 0, sal_t, n = 0, max = 0, fi = 0, fi_t;
    int i = 0;
    struct informacoes informacoes_t;

    while (i < x){
        sal = 0;
        fi = 0;
        printf("---Dados da Pessoa %i---\nSalario: \n", i+1);
        scanf("%f", &sal);
        printf("Filhos: \n");
        scanf("%f", &fi);
        if (sal > max)
            max = sal;
        sal_t += sal;
        fi_t += fi;
        if (sal <= 350)
            n++;
        i++;
    }
    informacoes_t.salario = sal_t / x;
    informacoes_t.filhos = fi_t / x;
    informacoes_t.salario_maior = max;
    informacoes_t.porcentagem = (n / x) * 100;

    return informacoes_t;

}

int main() {
    int y;
    struct informacoes informacoes_t;
    printf("Digite o numero de pessoas: ");
    scanf("%i", &y);
    informacoes_t = func(y);

    printf("Media Salarios: %.2f \n", informacoes_t.salario);
    printf("Media Filhos: %.2f \n", informacoes_t.filhos);
    printf("Maior Salario: %.2f \n", informacoes_t.salario_maior);
    printf("Porcentagem: %.2f \n", informacoes_t.porcentagem);


}