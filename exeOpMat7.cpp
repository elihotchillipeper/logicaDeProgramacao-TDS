#include <iostream>
int main(){

int a = 8;
int b = 9;
int c = 17;

int soma = a + b;

bool resultado = (a + b == c);

    printf("A soma dos números é: %d + %d = %d\n", a, b, soma);

    printf("A soma é igual a 17?: %s\n", resultado? "true" : "false");


    return 0;
}