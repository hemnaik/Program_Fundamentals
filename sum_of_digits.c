#include<stdio.h>
#include<conio.h>
void main()
{
	  int sum=0,num;
	  printf("Enter Number:");
	  scanf("%d",&num);
	  while(num!=0)
	  {
	  	  sum=sum+(num%10);
	  	  num=num/10;
	  }
	  printf("Sum of Digits of entered number=%d",sum);
	  getch();
}
