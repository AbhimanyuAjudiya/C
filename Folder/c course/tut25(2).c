#include<stdio.h>
fib_itrative(int n)
{
    int a=1;
    int b=0;
    for (int i=0;i < n-1;i++)
    {
        b=a+b;
        a=b-a;
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