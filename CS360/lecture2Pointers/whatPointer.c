#include<stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    // pointer : simply an identifier for a memory adress
    // its like asking a local how can I go to this place
    int i = 10;
    // doing that means ptr now stores the memory adress of i value
    int *ptr = &i;
    printf("the adress of the i : %lx \n",ptr);
    printf("the value wich ptr shows in this case i : %d \n",*ptr);

    // as I mention before when we use arrays pointers shows the first
    // adress of this array 
    char j[14];
    j[0] = 'a';
    j[1] = 'B';
    char *charPointer = j; // BE AWARE THAT WE HAVENT USED & like int val.
    // lets see that first eleman of the array and array pointer shows
    // the saame memomary adress
    printf("the memory adress of the arrey : %lx \n"),charPointer;
    printf("the first memory adress of the arrey : %lx \n"),&j[0];
    printf("reaching a value via pointer in array : %c \n",*charPointer);
    printf("reaching a value via pointer in array : %c \n",*charPointer + 1);
    
    int numberArray[15];
    for(i = 0;i< 15;i++){
        numberArray[i] = i*2;
    }
    int *intListPointer = numberArray;
    printf("printing the first value of the array : %d \n",*intListPointer);
    printf("printing the second value of the array WRONG : %d \n",*intListPointer + 1);
    // the expression above first takes the value of a pointer then add 1
    // so thats wrong
    printf("printing the third value of the array : %d \n",*(intListPointer + 2));

    printf("printing the SECOND value of the array : %d \n",(*intListPointer +1));
    // the reason above expression shows second value compiler 
    // automaticaly knows that it should add 4 because thats a int list
    return 0;
}
