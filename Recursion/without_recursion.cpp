#include <iostream>
#include <stdio.h>

using namespace std;


void fun(int x)
{
	while(x>0)
	{
		cout<< "x= :"<<x<<endl;
		x--;

	}
}

int main()
{

	fun(100);
	return 0;
}
