// #include <stdio.h>
// int sum(int a, int b);
// void printstar(int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//          printf("%c", '*');
//     } 
// }


// int takenumber()
// {
//     int i;
//     printf("Enter a number");
//     scanf("%d", &i);
//     return i;
// }
// int main()
// {
//     int a, b, c;
//     a = 9;
//     b = 87;
//     // c = sum(a, b);
//     // printstar(7);
//     c = takenumber();
//     // printf("The sum is %d \n", c);
//     printf("The number entered is %d \n", c);
//     return 0;
// }


// int sum(int a, int b)
// {
//     return a + b;
// }
#include<stdio.h>
void greeting()
{
    printf("Thank you");
}
int main()
{
    int a,b;
    printf("Enter number a\n");
    scanf("%d",&a);
    printf("Enter number b\n");
    scanf("%d",&b);
    
    printf("Addition of a and b is %d\n",(a+b));

    greeting();

    return 0;
}
