// reaching runtime polymorphism with virtual function
#include<iostream>
using namespace std;
class base{
	public:
	virtual void print(){//for changing in run time (dynamically binding) binding after getting adress in runtime  
		cout<<" base print ";
	}
	void display(){
		cout<< " base display ";
	}
};
class derived:public base{
	public:
	void print(){
		cout<<" derived print ";
	}
	void display(){
		cout<< " derived display ";
	}
};
int main(){
	base *baseptr;
	derived d;
	baseptr =&d;
	baseptr -> print();//-> insted of (.) operator   
	//baseptr -> display();
	return 0;
}