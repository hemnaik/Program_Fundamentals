#include<stdio.h>
#include<conio.h>
void main()
{
	  int sum,a=0,b=1,num,i;
	  printf("Enter Number:");
	  scanf("%d",&num);
      printf("Fibonacci Series of entered number\n");
	  for(i=1;i<=num;i++)
	  {
	  	   printf("%d\n",sum);
	  	   a=b;
	  	   b=sum;
	  	   sum=a+b;
	  }
	 
	  getch();
}
