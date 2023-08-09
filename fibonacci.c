#include<stdio.h>
#include<conio.h>
main()
{
    int i,a,b,n,s;
    printf("Enter number upto series needed :");
    scanf("%d",&n);
    a=0,b=1;
    if(n==1)
       {printf("0");}
    else if(n==2)
       printf("0\t1");
    else
       {
        printf("0\t1\t");
    for(i=1;i<=n-2;i++)
          { 
             s=a+b;
             a=b;
             b=s;
             printf("%d\t",s); 
          } 
       }
       
}