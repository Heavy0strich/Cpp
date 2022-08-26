#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int rows;
    int cols;
    float *c;
}smartarray;

int main()
{
   int x = 5; int i = 0;
   smartarray myStruct;
   myStruct.number = 10;
   myStruct.c = 'F';
   //smartarray.number = 10;
   //smartarray.c = "F";

    printf("%d %c", myStruct.number , myStruct.c);
    //printf("%d %c", smartarray.number, smartarray.c);
    return 0;
}
