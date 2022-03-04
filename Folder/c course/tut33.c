#include<stdio.h>
void starpatten(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0;j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
void reversstarpatten(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0;j <= rows-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
int main()
{
    int rows,t;
    printf("Enter 0 for revers star patten and Enter 1 for starpaten\n");
    scanf("%d",&t);
    printf("Enter number of rows you want:\n");
    scanf("%d",&rows); 
    
    switch (t)
    {
    case 0:
        reversstarpatten(rows);
        break;
    
    case 1:
        starpatten(rows);
        break;
    
    default:
        printf("invelid choise");
        break;
    }
    return 0;
}