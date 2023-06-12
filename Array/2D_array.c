#include<stdio.h>
#include<unistd.h>
#include<iostream>
using namespace std;

int main()
{
	int *p[3];
	int **c;
	int A[3][4]=
	{{1,2,3,4},{2,3,4,5},{3,4,5,6}};



	 c= (int **)malloc(3*sizeof(int *));
	 p[0]=(int *) malloc(4*sizeof(int));
	 p[1]=(int *) malloc(4*sizeof(int));
	 p[2]=(int *) malloc(4*sizeof(int));
 
	 for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}


	return 0;

}
