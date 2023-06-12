#include<stdio.h>
#include<iostream>
#include<unistd.h>

using namespace std;


void fun(int x)
{

	if (x>0)
	{
		cout<<x;
		fun(x-1);
		fun(x-1);
	
	}
}

int main()
{
		fun(4);
	return 0;
}
