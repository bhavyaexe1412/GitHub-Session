#include<stdio.h>
void main()
{
    int a,b;

    printf("\n Enter the value of First numbers : ");
    scanf("%d",&a);
    printf(" Enter the value of Second numbers: ");
    scanf("%d",&b);
    printf("\n\n\n Before Swaping First Number is %d and Second Number is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After Swapng First Number is   %d and Second Number is %d\n ",a,b);
    printf("\n\n\t\t\t Prepared by Vedant 22CE053 \n\n ");
    getch();
}
