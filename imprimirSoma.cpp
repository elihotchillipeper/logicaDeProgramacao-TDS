#include <iostream>
int main(){

int a, b;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    int soma = a + b;

    printf("A soma dos números é: %d + %d = %d\n", a, b, soma);

    return 0;
}