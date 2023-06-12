#include<stdio.h>
#include<unistd.h>
#include<iostream>
using namespace std;


struct array
{
	int lenth;
	int size ;
	int *A;
};

void display(struct array arr)
{
	for(int i=1;i<=arr.lenth;i++)
	{
		printf("%d",arr.A[i]);
	}
}
int main()
{
	struct array arr;
	int n,i;

	printf("Enter size of array :");
	scanf("%d",&arr.size);


	arr.A=(int *)malloc(sizeof(int));

	printf("enter lenth of array :");
	scanf("%d",&n);
	arr.lenth=n;

	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	display(arr);

		
//	retrun 0;
}
