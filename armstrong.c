#include<stdio.h>
#include<conio.h>
void main()
{
	  int sum=0,num,temp,r;
	  printf("Enter Number:");
	  scanf("%d",&num);
	  temp=num;
	  while(num!=0)
	  {
	  	  r=num%10;
	  	  sum=sum+(r*r*r);
	  	  num=num/10;
	  }
	  if(sum==temp)
	  printf("%d is armstrong number",temp);
	  else
	  printf("%d is not armstrong number",temp);
	  getch();
}
