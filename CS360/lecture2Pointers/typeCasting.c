#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef long unsigned int LU; // now LU means unsigned int

int main(int argc, char const *argv[])
{
    // take a variable that is stored in x bytes, and assign them to 
    // a variable that is stored in y bytes. This is called ``type casting'

    char caracter;
    int number;
    float floatingNumber;

    caracter = 'a';
    number = caracter;
    floatingNumber = number;
    // in this example we only made that bigger size = low size 
    // we dont neer type cast for that type of assignments
    printf("caracter :  %d  (%c) number : %d floating number : %f \n",
    caracter,caracter,number,floatingNumber);

    int i;
    char j[14];
    int *ip;
    char *jp;
    ip = &i;
    jp = j;


    printf("jp long decimal = %ld .  jp hexa = 0x%lx \n", (LU)jp, (LU)jp);
    printf("jp long decimal = %ld .  jp hexa = 0x%lx \n", (LU)ip, (LU)ip);
    // quick reminder :
    long num = 1234567890;
    printf("Decimal: %ld \n", num);
    printf("Hexadecimal: 0x%lx\n", num);
    // %ld normal 10 dalık tabanda yazdırırken %lx aynı sayıyı 16 lık 
    // tabanda yazdırrır
    printf("size of int pointer : %d size of unsigned long value : %d",
    sizeof(int*),sizeof(LU));
    // now in my system LU is 4 byte and int pointer is 8 byte
    // because of that when I wanna cast int pointer to LU value it gives
    // me an error thats because there is a data loss 
    // pointers are 8 byte 

    char s[4];
    i = 0;
    char *s2;
    strcpy(s,"jim");
    i = (int) s;
    printf("before incrementing i.\n ");
    // right now i is simply an int value 
    printf("i 's value as an int and hexadecimal : %d (0x%x) \n",i,i);
    printf("s 's adress long int and hexadecimal: %ld (0x%lx)\n",(LU)s,(LU)s);
    // normalde veri kaybı olmasa i şu an s in adresini tuttuğu için değerler aynı olmalı
    // şu an her iki değerde aynı
    i++; // normalde char pointer olsa direk j den sonrakini göstermesi 
    // gerekecekti yani i adres olarak tabiki
    s2 = (char *)i;
    printf("\n");
    printf("After incrementing i.\n");
    printf("s = 0x%lx.  s2 = 0x%lx, i = 0x%x\n", (LU)s, (LU)s2, i);
    printf("s[0] = %c, s[1] = %c, *s2 = %c\n", s[0], s[1], *s2);
    // thats why you shouldnt typecast a pointer to int value 
    return 0;
}
