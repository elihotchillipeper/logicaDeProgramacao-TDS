//Calculo IMC

#include <iostream>

int main(){

    int alt_cm, peso_kg;

    std::cout << "Digite sua altura em centímetros: ";
    std::cin >> alt_cm;

    std::cout << "Digite seu peso em quilogramas: ";
    std::cin >> peso_kg;

    double alt_metros = alt_cm / 100.0;
    
    int imc = peso_kg / (alt_metros * alt_metros);

    std::cout << "Seu IMC é: " << imc << std::endl;


    return 0;
}