#include<iostream>
#include<stdio.h>
using namespace std;
int fun(int n)
{
	if(n==0)
		return 0;
	return fun(n-1)+n;
}

int fun_using_for_loop(int n)
{
	int sum=0;
	for (int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}


int main()
{
	int r=fun(5);
	cout<<r;
	
	int sum=fun_using_for_loop(5);
	cout<<endl<<sum;
	return 0;
}

/*
 fun(5)+_=15  this is output
 fun(4)+_=10
 fun(3)+_=7
 fun(2)+_=4
 fun(1)+_=2
 */
