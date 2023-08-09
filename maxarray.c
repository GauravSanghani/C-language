#include<stdio.h>
#include<conio.h>
main()
{
    int i,a[10];
    printf("Enter element of array :\n");
    for (i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }printf("maximum element is :%d",a[0]);
}
