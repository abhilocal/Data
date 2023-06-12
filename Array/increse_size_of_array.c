#include<stdio.h>
#include<unistd.h>
#include<iostream>

using namespace std;


int main()
{
	int *p,*q;

	p=(int *) malloc(5*(sizeof(int)));
	q=(int *) malloc(10*(sizeof(int)));

	p[0]=1,p[1]=2,p[2]=3,p[3]=4,p[4]=5;

	for(int i=0;i<=4;i++)
	{
		cout<<p[i]<<endl;
		q[i]=p[i];
		cout<<"q="<<q[i]<<endl;
	}
	free(p);
	q=p;
	p[8]=80;
	cout<<"P[8]="<<p[8];

	return 0;
}
