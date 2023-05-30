#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int lenth,breadth;
	cout<<"Enter a lenth or breadth :";
	cin >>lenth>>breadth;
	int area =lenth*breadth;
	int peri=2*(lenth+breadth);
	cout <<"lenth is :"<<lenth<<endl<<"breadth is :"<<breadth<<"aread is :"<<area<<endl<<"peri is :"<<peri<<endl;
	return 0;

}

