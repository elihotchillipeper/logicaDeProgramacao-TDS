//Converter temperatura de °C para °F

#include <iostream>

int main(){

    int temp_c;

    std::cout << "Digite a temperatura em °C: ";
    std::cin >> temp_c;

    double temp_f = (temp_c * 9/5) + 32;

    std::cout << "A temperatura em Fahrenheit é: " << temp_f << std::endl;


    return 0;
}