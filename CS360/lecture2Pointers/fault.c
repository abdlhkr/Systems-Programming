#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char *ptr;
    // we simply try the create an array but it didnt work 
    // ptr = NULL;
    // now we are trying to reach a memory wich isn't allowed to use

    printf("value : %d",ptr);
    // the reason we are getting 0 for that phrase is a comman bug and way to fix
    // 0 is the key it means this pointer doesn't show anything
    /* code */
    return 0;
}
