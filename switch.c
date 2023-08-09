#include<stdio.h>
int main()
{
    int n,r,l,b;
    float a;
    printf("Enter no which area need (1 for traingle,2 for rectangle,3 for circle) :");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Enter Base of triangle :");
        scanf("%d",&b);
        printf("Enter Height of triangle :");
        scanf("%d",&l);
        a=l*b/2;
        printf("Given triangle area is : %f",a);
        break;
    case 2:
        printf("Enter width of rectangle :");
        scanf("%d",&b);
        printf("Enter length of rectangle :");
        scanf("%d",&l);
        a=l*b;
        printf("Given rectangle area is : %f",a);
        break;
    case 3:
        printf("Enter radius of circle :");
        scanf("%d",&r);
        a=3.14*r*r;
        printf("Given cirle area is : %f",a);
        break;    
    
    
    default:
        printf ("enter 1 for triangle area,2 for rectangle area,3 for circle area");
        break;
    }
}