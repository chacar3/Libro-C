//Ejemplo incremento
#include <stdio.h>
//#include <stdlib.h>
#include <conio.h>
int main()
{
    int a=7,b;
    b= ++a+3; // a se incremente en 1, le sumamos 3 y b recibe 11
    b= b+a+++5; // b recibe 11+8+5 y la a se incrementa
    //printf("%d,%d" , a,b);
    printf("%d,%d" , a,b);
    getch();
    //printf("Hello world!\n");
    return 0;
}
