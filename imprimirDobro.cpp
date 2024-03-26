#include <iostream>

int main(){

int a;
int b = 2;

    printf("Digite o um número: ");
    scanf("%d", &a);

    int multiplicacao = a * b;

    printf("Multiplicação: %d * %d = %d\n", a, b, multiplicacao);

    return 0;
}