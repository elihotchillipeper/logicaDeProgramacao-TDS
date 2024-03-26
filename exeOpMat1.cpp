#include <iostream>

int main(){
    int a = 5;
    int b = 3;
    int c = 10;


    bool resultado = (a > b && a < c);
    printf("True or False: %s\n", resultado? "true" : "false");

    return 0;
}
