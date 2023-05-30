#include<iostream>
#include <stdio.h>
using namespace std;

template<class T>
class Arithetic
{
private:
	T a;
	T b;
public:
	Arithetic(T a,T b)
	{
		this->a=a;
		this->b=b;
	}
	T add()
	{
		T c;
		c=a+b;
		return c;
	}
	T sub()
	{
		T c ;
		c=a-b;
		return c;
	}
	T div();
	T mul();
};
// by scope resolution using :: operator

template <class T>
T Arithetic<T>::div()
{
	T c =a/b;
	return c;
}
template <class T>
T Arithetic<T>::mul()
{
	T c=a*b;
	return c;
}

int  main()
{
	Arithetic ar={29,20};
	int add1=ar.add();
	int sub1=ar.sub();
	int mul1=ar.mul();
	int div1=ar.div();
	cout <<"add:"<<add1<<endl<<"sub:"<<sub1<<endl<<"mul:"<<mul1<<endl<<"dev:"<<div1<<endl;

	return 0;

}






