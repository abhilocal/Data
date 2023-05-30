#include <stdio.h>
#include <iostream>

using namespace std;


struct rect
{
	int lenth;
	int breadth;
};

int area(struct	rect *r)
{
	return (r->lenth*r->breadth);
}

int peri( int lenth ,int breadth)
{
	return (2*(lenth*breadth));
}

void takeinputbyuser(struct rect *r)
{
	cin>>r->lenth;
	cin>>r->breadth;
}



int  main()
{
	struct rect r={0,0};
//	int lenth ,breadth;
	takeinputbyuser(&r);
	int area1=area(&r);
	int peri1=peri(r.lenth,r.breadth);
	cout<<"lenth="<<r.lenth<<endl<<"breadth:"<<r.breadth<<endl<<"area:"<<area1<<endl<<"peri:"<<peri1<<endl;
	cout<< endl<<"end program";
	return 0;
}

