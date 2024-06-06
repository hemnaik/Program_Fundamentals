#include<stdio.h>
#include<conio.h>
void main()
{
	  int reverse=0,num;
	  printf("Enter Number:");
	  scanf("%d",&num);
	  while(num!=0)
	  {
	  	  reverse=reverse*10+(num%10);
	  	  num=num/10;
	  }
	  printf("Reverse of entered number=%d",reverse);
	  getch();
}
