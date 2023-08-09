#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum=0;
    int lastDig =0;
    while (n!=0)
    { 
        lastDig =n%10;
        sum=sum+lastDig;
        n=n/10;
    }
    printf("The sum of digit is : %d",sum);
}