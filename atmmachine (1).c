#include<stdio.h>
#include<conio.h>
void main()
{
int dep,with,be=5000,i;
clrscr();
printf("WELCOME TO THE ATM");
printf("\n SELECT THE MODE OF TRANSACTION");
printf("\n 1.DEPOSIT");
printf("\n 2.WITHDRAWAL");
printf("\n 3.BALANCE ENQUIRY");
printf("PLEASE ENTER YOUR CHOICE:");
scanf("%d",&i);
switch(i)
{
case 1:
	printf("ENTER THE AMOUNT TO BE DEPOSITED");
	scanf("%d",&dep);
	printf("THE BALANCE IN YOUR BANK ACCOUNT IS \n\t",be+dep);
	break;
case 2:
	printf("ENTER THE AMOUNT TO BE WITHDRAWED");
	scanf("%d",&with);
	printf("THE BALANCE IN YOUR BANK ACCOUNT IS \n\t",be-with);
	break;
case 3:
	printf("THE BALANCE IN YOUR BANK ACCOUNT IS \n\t",be);
	break;
}
getch();
}
