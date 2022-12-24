//This programm is prepared by 22TCE073_SUHASI
#include<stdio.h>
#include<conio.h>
void main()  {
int  order, stock=100;
char credit;
L:
clrscr();
printf("Do you have credit:");
scanf(" %c", &credit);

if(credit=='y'||credit=='Y') {
    printf("Enter your order:");
    scanf("%d", &order);
     if(order<=stock){
     printf("\nCredit is okk supply has credit");
     stock=stock-order;
     printf("\nRemaining stock %d",stock);
     }
     else{
     printf("\ncredit is okk but we don't have enough stock and your balance will be refunded");
	 }
}else{
      if((credit=='n'||credit=='N')&&order<=stock){
	 printf("\nYou don't have enough credit");}
      else if(order>=stock&&(credit=='y'||credit=='Y')){
	 printf("%d supplied because %d item will be refunded",stock,order-stock);
      }
      else{
	 printf("\nYou have enter wrong character");
	 }
	 if(stock!=0)
	 goto L;
	 }
printf("\nBy 22TCE073_SUHASI");
getch();
}