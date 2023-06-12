#include<iostream>
#include<stdio.h>
using namespace std;


int fact(int n)
{
	if(n==0)
		return 1;
	return fact(n-1)*n;
}

int fact_using_for_loop(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
	fact =fact*i;

	}
	return fact;
}
int main()
{
	int r=fact(5);
	cout<< r;
	int f=fact_using_for_loop(5);
	cout<<endl<<f;
	return 0;
}
