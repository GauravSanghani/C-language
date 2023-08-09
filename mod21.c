#include<stdio.h>
#include<conio.h>
main()
{
    int a,square,cube;
    printf("Enter Number :");
    scanf("%d",&a);
    square=a*a;
    printf("Square of %d is : %d\n",a,square);
    cube=a*a*a;
    printf("Cube of %d is : %d",a,cube);    
}