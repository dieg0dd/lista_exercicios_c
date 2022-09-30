#include <stdio.h>

float triangulo(float x, float y, float z){
    int tipo;

    if (x==y && x==z)
        tipo = 1;
    else if (x==y && x!= z || y==z && y!=x)
        tipo = 2;
    else if (x!=y && x!= z && y!=z)
        tipo = 3;
    else
        return -1;

    return tipo;
}

int main() {
    float a, b, c;
    int type;

    printf("Digite os 3 lados do Triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    type = triangulo(a, b, c);

    switch (type) {
        case 1:
            printf("O Triangulo e Equilatero!");
            break;
        case 2:
            printf("O Triangulo e Isosceles!");
            break;
        case 3:
            printf("O Triangulo e Escaleno!");
            break;
        default:
            break;
    }
}