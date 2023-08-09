#include<stdio.h>
#include<conio.h>
main()
{
    int a,i;
    printf("Enter the any number a :");
    scanf("%d",&a);
    int prime=1;
    for(i=2;i<a-1;i++)
    {
        if(a%i==0)
       {  
        prime=0;
        break;     
       }   
    }
    
       if(prime==0)
       {
        printf("%d is not prime",a);
       }
       else if(a==1 || a==0){printf("%d is nither prime nor composite",a);}
       else{
        printf("%d is prime",a);
       }
    }
    
