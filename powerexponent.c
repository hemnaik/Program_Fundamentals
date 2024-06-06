#include<stdio.h>
#include<conio.h>
void main()
{
	  long int power,exponent,ans=1,i;
	  printf("Enter Exponent:");
	  scanf("%d",&exponent);
	   printf("Enter Power:");
	  scanf("%d",&power);
     
	  for(i=1;i<=power;i++)
	  {
	  	   ans=ans*exponent;
	  }
	  printf("Power Value for entered exponent=%d",ans);
	  getch();
}
