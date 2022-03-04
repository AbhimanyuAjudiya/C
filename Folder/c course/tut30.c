/* 
Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern


*****
****
***
**
* -> Reversed triangular star pattern

*/
#include <stdio.h>
int main()
{
    int a;
    start:
    printf("Choose 0 for triangular star paten and 1 for revers triangular star patten\n");
    scanf("%d",&a);

    switch (a)
    {
    case 0:
        printf("*\n**\n***\n****");
        break;
    case 1:
        printf("****\n***\n**\n*");
        break;
    
    default:
        printf("\ninvalid number!!\n");
        printf("Try again.\n");
        goto start;
    }
    return 0;
}