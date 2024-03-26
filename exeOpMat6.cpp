#include <iostream>
int main(){
    int a = 20;
    int b = 4;

    int divisao = a / b;
    int resto = a % b;

    printf("A divisão dos números é: %d / %d = %d (Quociente), Resto: %d\n", a, b, divisao, resto);

    return 0;
}