#include <stdio.h>

float vlrs(float n){
    float s = 1/1, i = 1/1, j;

    for (j=2; j <= n; j++){
        s = 1/j;
        i += s;
    }

    return i;
}

int main(){
    float n1, calc;

    printf("Digite um valor para ver o valor de S: ");
    scanf("%f", &n1);

    calc = vlrs(n1);

    printf("O valor de S é: %f", calc);

    return 0;
}