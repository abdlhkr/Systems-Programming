#include <stdio.h>
#include <stdlib.h>
char s1[15]; // global string
// When you pass arrays as parameters,
// the pointers are passed, and not the arrays
// normally thats a void procedure so it shouldnt change anything
// in python java ex. but in c lists are pointers so list will change
// C expects a pointer for a array input so even I made a[999] its the same
void changeCase(char a[15]){
    int i ;
    for(i = 0; a[i] != '\0';i++){
        if(a[i] >= 'a' && a[i] <= 'z'){
            a[i] = a[i] + ('A' - 'a');
        }
    }
}
struct intDouble
{
    int a;
    double b;
};

// to make it more readble we can use a typdef definition
typedef struct intChar
{
    int a;
    char c;
} ID; // now whenever I need to use intChar I can call ID
typedef struct aggregateTypes
{
    int a[1000];
    char b[20];
    /* data */
} structList;

void changeLastValue(structList item){
    item.a[999] = -1;
    // since thats not the pointer but a copy of it it wont do anything
}

void changeCalueWithPointrer(structList *item){
    item -> a[999] = -1;
}
int main(int argc, char const *argv[])
{
    char chars2[15]; // local string
// Arrays and structs are aggregate types in C. They are more complex
//than scalars. You can statically declare an array as a global or local variable
    int i;
    char firstLetter = 'a';
    for(i = 0; i < 15; i++){
        chars2[i] = firstLetter + i; 
    }
    printf("before case change %s \n", chars2);
    changeCase(chars2);
    printf("after case change %s \n",chars2);
    // chars2 = "merhaba"; we cant copy a list to another



    // structs : its the same as a class but without methods and constructers
    // it doesnt even have access modifier such as private public ex...

    struct intDouble item;
    item.a = 5;
    item.b = 9.9;
    printf("items a : %d b : %lf \n",item.a,item.b);
    
    ID easyItem, easyItemTwo;
    easyItem.a = 4;
    easyItem.c = 'x';
    printf("items a : %d b : %c \n",easyItem.a,easyItem.c);

    // we can copy a struct to another 
    easyItemTwo = easyItem;
    printf("items a : %d b : %c \n", easyItemTwo.a, easyItemTwo.c);
    // now thats a problem because if have an array in the struct
    // it will copy the list and doesnt send the pointer as casual
    // if have a struct wich includes 1000 int value that means 
    // we will have 4000 byte of garbage in our system

    structList itemFirst,itemSecond;
    i = 0; char first = 'a';
    for(i = 0;i < 1000;i++){
        itemFirst.a[i] = i;
        if(i < 20){
            itemFirst.b[i] = first + i;
        }
    }
    // now we have 4020 byte in that struct lest copy 
    itemSecond = itemFirst; // thats gonna use 4020 extra memory ::((
    printf("size of : %d\n",sizeof(itemFirst));
    printf("size of : %d\n",sizeof(itemSecond));

    changeLastValue(itemFirst);
    printf("last eleman after method : %d\n",itemFirst.a[999]);

    // if we wanna change the value of a struct in a method we should 
    // send pointer of it
    changeCalueWithPointrer(&itemFirst);
    printf("last eleman after changing via pointer method : %d\n", itemFirst.a[999]);
    return 0;
}
