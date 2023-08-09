#include<stdio.h>
#include<conio.h>
main()
{
    int l,n,rev=0;
    printf("Enter the number :");
    scanf("%d",&n);
    int lastDig =0;
    l =n%10;
    if (l>0)
    {
    while (n!=0)
    {   
        lastDig =n%10;
        rev=rev*10;
        rev=rev+lastDig;
        n=n/10;
    }
    printf("The rev of digit is : %d",rev);
    }
    else
    {
    while (n!=0)
    {   
        lastDig =n%10;
        rev=rev*10;
        rev=rev+lastDig;
        n=n/10;
    }
    printf("The rev of digit is : 0%d",rev);
    }
}