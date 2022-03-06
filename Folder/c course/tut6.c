#include<stdio.h>

int main()
{
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(int long));
    printf("%lu\n", sizeof(int long long));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));
    printf("%lu\n", sizeof(long double));
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(signed char));
    printf("%lu\n", sizeof(unsigned char));
    return 0;
}