#include <stdio.h>
#include <unistd.h>
#include<iostream>

using namespace std;
int main()
{

	int A[5]={1,2,3,4,5};
	int *p = (int *)malloc(5*sizeof(int));
	p[0]=12;
	p[4]=16;
	p[1]=13;
	p[2]=14;
	p[3]=15;

	for(int i=0;i<=4;i++)
	{
		cout<<p[i]<<endl;
	}

	for (int i=0;i<=4;i++)
	{
		printf("%d",A[i]);
		cout <<endl;
	}
	free(p);

return 0;
}
