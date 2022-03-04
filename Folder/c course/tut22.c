#include<stdio.h>

float kmtom(float kilometer)
{
    return (kilometer*1000);
}
float itof(float inches)
{
    return(inches/12);
}
float cmtoi(float cm )
{
    return(cm/2.54);
}
float ptokg(float pound)
{
    return(pound/2.205);
}
float itom(float inches)
{
    return(inches/39.37);
}

int main()
{
    float a;
    float num;
    Start:
    printf("For,\nKelometer to Meter, 'Press 1'\n");
    printf("Inches to Foot, 'Press 2'\n");
    printf("Centimeter to Inches, 'Press 3'\n");
    printf("Pound to Kelogram, 'Press 4'\n");
    printf("Inches to Meter, 'Press 5'\n");
    printf("Press '6' for exit\n"); 
    scanf("%f",&num);
    if (num==6)
    {
        printf("Thank you");
        return 0;
    }
    printf("Enter the number\n");
    scanf("%f",&a);
    if (num==1)
    {
        printf("Kelometer to Meter of %f is %f\n",a,kmtom(a));
        goto Start;     
    }
    else if(num==2)
    {
        printf("Inches to Foot of %f is %f\n",a,itof(a)); 
        goto Start;    
    }
    else if(num==3)
    {
        printf("Centimeter to Inches of %f is %f\n",a,cmtoi(a));
        goto Start;     
    }
    else if(num==4)
    {
        printf("Pound to Kelogram of %f is %f\n",a,ptokg(a)); 
        goto Start;    
    }
    else if(num==5)
    {
        printf("Inches to Meter of %f is %f\n",a,itom(a));  
        goto Start;   
    }
    return 0;
}