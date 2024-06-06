#include<stdio.h>
#include<conio.h>
void main()
{
	  int num;
	  printf("Enter Number:");
	  scanf("%d",&num);
	  if(num%4==0)
	  printf("%d is leap year",num);
	  else
	  printf("%d is not leap year",num);
	  getch();
}
