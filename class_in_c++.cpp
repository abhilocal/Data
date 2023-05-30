#include <stdio.h>
#include <iostream>
using namespace std;

class rect
{
	int lenth;
	int breadth;
public :
	rect()
	{
		lenth=0;
		breadth=0;
	}

	rect(int l,int b)
	{
		lenth=l;
		breadth=b;
		cout<<lenth<<endl<<breadth<<endl;
	}
	int area()
	{
		return (lenth*breadth);
	}
	int peri()
	{
		return (2*lenth+breadth);
	}
        void setlength(int l)
	{
		lenth=l;
	}
        void setbreadth(int b)
	{
		breadth=b;
	}
	int getlenth()
	{
		return lenth;
	}
	int getbreadth()
	{
		return breadth;
	}
	 ~rect()
	 {
		cout<<"Destructor"<<endl;
	 }
		

};



int main()
{

	rect r(10,5);
	int area1=r.area();
	int peri1=r.peri();


	cout<<"area :"<<area1<<endl<<"peri :"<<peri1<<endl;
	return 0;
}
