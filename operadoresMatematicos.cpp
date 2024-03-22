#include <iostream>

int main(){
    //Definindo os númerospara as operações
    int num1 = 10;
    int num2 = 5;

    //Realizando as operações matemáticas
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    int divisao = num1 / num2;
    int resto = num1 % num2; //Resto da divisão

    //Imprimindo os resultados
    printf("soma: %d + %d = %d\n", num1, num2, soma);
    printf("subtracao: %d - %d = %d\n", num1, num2, subtracao);
    printf("multiplicacao: %d * %d = %d\n", num1, num2, multiplicacao);
    printf("divisao: %d / %d = %d (Quociente), Resto: %d\n", num1, num2, divisao, resto);
    return 0;
}