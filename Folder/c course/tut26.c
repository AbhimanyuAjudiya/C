#include<stdio.h>
int main()
{
    int a=76;
    int* ptra = &a;
    int* ptr2 = NULL;
    printf("Lets learn about pointers\n");
    printf("The value of a is %d\n",a);
    printf("The value of a is using pointer %d\n", *ptra);
    printf("The address of a is %p\n", ptra);
    printf("The address of some garbage is %p\n", ptr2);
    printf("The address of ptra is %p\n", &ptra);
    
    return 0;
}