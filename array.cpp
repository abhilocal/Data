#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{
	int array[]={1,2,3,4,5,6,7,8,9};
	cout<<sizeof(array)<<endl;
	while(1)
	{
		for (int x:array)
		{
			cout<<x<<endl;
			sleep(1);
		}
	}
return 0;
}

