#include <stdio.h>
#include <string.h>
int main()
{
    char f1[32];
    char f2[31];

    char f3[] = " is friend of ";
    char f4[50];

    printf("First friend ");
    gets(f1);

    printf("Second friend ");
    gets(f2);

    strcpy(f4, (strcat(f1, (strcat(f3, f2)))));

    puts(f4);
}