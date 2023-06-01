#include <iostream>
#include <stdio.h>

using namespace std;
// this function is recersive function
void fun(int x)
{
	if (x>0)
	{
		cout<<"fun()n is : "<<x<<endl;
		x--;
		fun(x);
		
	}
}
// this function is also recersive but first call function and after print
void fun1(int x)
{
	if(x>0)
	{
		fun1(x-1);
		cout<<"fun1() n is:"<<x<<endl;
	}
}


int main()
{
	int x=5;
	fun(x);
	cout <<"finish fun"<<endl;
	fun1(x);
	return 0;
}
