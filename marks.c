#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,d,e,total;
    float p;
    printf("Enter English Marks : ");
    scanf("%d",&a);
    printf("Enter Maths Marks : ");
    scanf("%d",&b);
    printf("Enter Science Marks : ");
    scanf("%d",&c);
    printf("Enter Hindi Marks : ");
    scanf("%d",&d);
    printf("Enter Gujarati Marks : ");
    scanf("%d",&e);
    total=a+b+c+d+e;
    {
    printf("TOtal is : %d\n",total);
    }
    p=total/5;
    {
    printf("Percentage is : %f\n",p);
    }
    if(p>75)
    {
        printf("Distinction");
    }
    else if(p<=75 && p>60)
    {
        printf("First class");
    }
    else if(p<=60 && p>50)
    {
        printf("Second class");
    }
    else if(p<=50 && p>35)
    {
        printf("Pass class");
    }
    else
    printf("Fail");
}