#include<iostream>
using namespace std;
void data1(struct abc data);

struct abc {
 int lenth;
 int weight;
};

// for this function only call by value
void data1(struct abc data2 )
{
	cout<<data2.lenth<<endl<<data2.weight<<endl;
        data2.lenth=100;
	cout<<"after change"<<data2.lenth<<endl;
}
// for this function call by reference 
void call_by_refrence(struct abc *p)
{
	cout<<p->lenth<<endl<<p->weight<<endl;
	p->lenth =200;
	cout <<p->lenth<<endl;

}
// there fucnction using allocate memmory from head using malloc 
struct abc *fun()
{
	struct abc *p
	p = new abc;
	//p = (struct abc *) malloc (sizeof(struct abc )); 
	p->lenth=300;
	p->weight=301;
	return p;

}
	
int main()
{
	struct abc data={28,12};

	cout<< data.lenth<<endl<<data.weight<<endl;
	cout <<"ok"<<endl;

	data1(data);

	cout<<"call by value finish"<<endl<<"start call by refrence"<<endl;
	call_by_refrence(&data);

	return 0;
}
