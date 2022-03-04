#include<stdio.h>
int main()
{
    int i,j,a=1;
    printf("Enter number which table you want \n");
    scanf("%d",&j);
    for (i = 0; i < 10;)
    {
        ++i;
        a=i*j;
        printf("%d x %d = %d\n",j,i,a);
    }
    return 0;
}