#include <iostream>
int main(){
    //char nome [100];
    std:: string nome;
    int idade;

    printf("Digite seu Nome: ");
    //scanf("%s", nome);
    std::cin >>nome;
    printf("Seu nome: %s\n", nome.c_str());

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("%d\n", idade);

    printf("Seja Bem-Vindo %s\n ! ", nome.c_str()) ;
   
    return 0;
}


    