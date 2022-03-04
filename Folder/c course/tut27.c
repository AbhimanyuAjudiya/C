#include<stdio.h>
int main()
{
    // char a = '3';
    // char* ptr = &a;
    // printf("%d\n", ptr);
    // ptr--;    
    // printf("%d\n", ptr);    
    // printf("%d\n", ptr-2);    

    int abhi[]={1,2,3,4,5,6,75};
    int* arrabhi = abhi;
    
    printf("The address of 1 element of arr abhi is %d\n", &abhi[0]);
    printf("The address of 1 element of arr abhi is %d\n", abhi);
    printf("The address of 2 element of arr abhi is %d\n", &abhi[1]);
    printf("The address of 2 element of arr abhi is %d\n", abhi+1);
    printf("The address of 3 element of arr abhi is %d\n", &abhi[2]);
    printf("The address of 3 element of arr abhi is %d\n", abhi+2);
    // abhi--; // this line will throw an error

    printf("The value of address of 1 element of arr abhi is %d\n", *&abhi[0]);
    printf("The value of address of 1 element of arr abhi is %d\n", *abhi);
    printf("The value of address of 1 element of arr abhi is %d\n", abhi[0]);
    printf("The value of address of 2 element of arr abhi is %d\n", *&abhi[1]);
    printf("The value of address of 2 element of arr abhi is %d\n", *abhi+1);
    printf("The value of address of 2 element of arr abhi is %d\n", abhi[1]);

    return 0;
}