#include <stdio.h>

int factoril(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number * factoril(number - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    printf("The factoril of %d is %d\n", num, factoril(num));

    return 0;
}