#include<stdio.h>
#include<conio.h>
void main()
{
	  int reverse=0,num,temp;
	  printf("Enter Number:");
	  scanf("%d",&num);
	  temp=num;
	  while(num!=0)
	  {
	  	  reverse=reverse*10+(num%10);
	  	  num=num/10;
	  }
	  if(temp==reverse)
	  printf("%d is palindrome number",temp);
	  else
	  printf("%d is not palindrome number",temp);
	  getch();
}
