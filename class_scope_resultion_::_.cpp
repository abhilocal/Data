#include<iostream>
#include <stdio.h>
using namespace std;

class Arithetic
{
private:
	int a;
	int b;
public:
	Arithetic(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
	int add()
	{
		int c;
		c=a+b;
		return c;
	}
	int sub()
	{
		int c ;
		c=a-b;
		return c;
	}
	int div();
	int mul();
};
// by scope resolution using :: operator
  
int Arithetic::div()
{
	int c =a/b;
	return c;
}

int Arithetic::mul()
{
	int c=a*b;
	return c;
}


int  main()
{
	Arithetic ar= {29,200};
	int add1=ar.add();
	int sub1=ar.sub();
	int mul1=ar.mul();
	int div1=ar.div();
	cout <<"add:"<<add1<<endl<<"sub:"<<sub1<<endl<<"mul:"<<mul1<<endl<<"dev:"<<div1<<endl;

	return 0;

}






