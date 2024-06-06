#include<stdio.h>
#include<conio.h>
void main()
{
	  int i,num,flag=0;
	  printf("Enter Number:");
	  scanf("%d",&num);
	  for(i=1;i<=num;i++)
	  {
	  	 if(num%i==0)
	  	 {
	  	 	 flag++;
		 }
      }
	  if(flag==2)
	  printf("%d is prime number",num);
	  else
	  printf("%d is not prime number",num);
    
	  getch();
}
