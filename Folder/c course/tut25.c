#include <stdio.h>
fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
}
int main()
{
    int num;
    printf("Enter the value to get Fibonacci number\n");
    scanf("%d",&num);
    printf("The numbers are %d %d\n",num,fib_recursive(num));
    return 0;
}