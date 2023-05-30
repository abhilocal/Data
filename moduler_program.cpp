#include <stdio.h>
#include <iostream>

using namespace std;

int area(int lenth , int breadth)
{
	return (lenth*breadth);
}

int peri( int lenth ,int breadth)
{
	return (2*(lenth*breadth));
}

void takeinputbyuser(int *lenth ,int *breadth)
{
	cin>>*lenth;
	cin>>*breadth;
}



int  main()
{
	int lenth ,breadth;
	takeinputbyuser(&lenth,&breadth);
	int area1=area(lenth,breadth);
	int peri1=peri(lenth,breadth);
	cout<<"lenth="<<lenth<<endl<<"breadth:"<<breadth<<endl<<"area:"<<area1<<endl<<"peri:"<<peri1<<endl;
	cout<< endl<<"end program";
	return 0;
}

