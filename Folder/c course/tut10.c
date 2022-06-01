#include <stdio.h>
int main()
{
    int subject;

    printf("Enter '0' for passing both the suject\nEnter '1' for passing in only maths suject\nEnter '2' for passing in only science suject\n");
    scanf("%d", &subject);

    if (subject == 0)
    {
        printf("You have passed both the subject \nHere is your gift worth of ₹45");
    }
    else if (subject == 1)
    {
        printf("You have passed Maths subject \nHere is your gift worth of ₹15");
    }
    else if (subject == 2)
    {
        printf("You have passed Science subject \nHere is your gift worth of ₹15");
    }
    else if (subject >= 3)
    {
        printf("You have entered invalide number");
    }

    // for voting
    // int age;

    // printf("Enter your age\n");
    // scanf("%d", &age);
    // printf("You have entered %d as your age\n",age);

    // if (age>=18)
    // {
    //     printf("You can vote!");
    // }
    // else
    // {
    //     printf("You cannot vote\n");
    // }

    return 0;
}
