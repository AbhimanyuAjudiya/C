#include<stdio.h> 

int main()
{
    int num, index = 1;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index * num);
        index = index + 1;
    } while (index <= 10);

    return 0;
}