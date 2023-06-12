#include <iostream>
#include <stdio.h>

void fun1(int n);
void fun2(int n);
using namespace std;
int main()
{
	fun1(25);
	return 0;
}


void fun1(int n)
{
	if(n>0)
	{
		cout<<"n=:"<<n<<endl;
		fun2(n-1);
	}
}

void fun2(int n)
{
	if(n>0)
	{
	//	cout<<"fun2 n="<<n<<endl;
		fun1(n/2);
	}
	
}
