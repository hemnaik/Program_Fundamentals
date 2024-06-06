#include<stdio.h>
#include<conio.h>
void main()
{
	  int num,x;
	  printf("Enter Number:");
	  scanf("%d",&num);
	
	  for(x=1;x<=num;x++)
	  {
	  	  if(num%x==0)
	  	  {
	  	  	  printf("Factor=%d\n",x);
	      }
	  }
	  
	  getch();
}
