#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    /* Segmentation Violations and Bus Errors */
    char *s;
    s = NULL;
    printf("%d\n", s[0]);
    return 0;
}
