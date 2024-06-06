#include<iostream>
using namespace std;
int ans;
int factorial(int num)
{
     if(num>=1)
     {
     	ans=ans*num--;
	     factorial(num);
	     return ans;
	 }
	 
}
int main()
{
	 int num;
	 std::cout<<"ENTER NUM:";
	 std::cin>>num;
	 ans=1;
	 int x=factorial(num);
	 std::cout<<"FACTORIAL="<<x<<endl;
	 return 0;
}
