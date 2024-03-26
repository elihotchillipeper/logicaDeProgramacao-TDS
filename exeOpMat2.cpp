#include <iostream>

int main(){
    int a = 7;
    int b = 10;
    int c = 6;
    int d = 8;

    bool resultado = (a == b || c == d);
    printf("True or False: %s\n", resultado? "true" : "false");


    return 0;
}