#include<stdio.h>
#include<stdlib.h>
int i = 0 ; // thats a global variable
int main(int argc, char const *argv[])
{
    // In C, there are three kinds of types that variables can have
    //  scalars, aggregates, and pointers. Half of the game in getting things
    // right in C is keeping yourself from being confused about types.

    /// there are 7 scalar types in  c
    /// int , short , char , long , float , double , pointer

    int j  = 0; // thats a local variableü
    printf("local variable j : %d \n",j);
    int j = argc; // thats a procedure parameter
    printf("procedure parameter j : %d \n",j);
    printf("i : %d \n",i);
    return 0;
}
