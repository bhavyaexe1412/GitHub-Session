#include<stdio.h>
#include<conio.h>
void main()

{
int i,j;
clrscr();
for(i=1,i<=6,i+1)
{
for(j=1,j<=6,j+1)
{
printf("%d,%d",i,j);
printf("\n");
}
}
getch();
}