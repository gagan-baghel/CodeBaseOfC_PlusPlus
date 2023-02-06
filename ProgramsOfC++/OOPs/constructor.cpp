#include<iostream>
using namespace std;


class A{
	public:
    int number;
    A(){
        number=10;
        cout<<this<<"  "<<number<<endl;
    }
	int a;
};

// class B:public A{

// };
int main (){
    A *obj1 = new A();
    cout<<&(*obj1);
	return 0;
}