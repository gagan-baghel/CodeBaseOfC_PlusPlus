#include<iostream>
using namespace std;
class A{
	private:
	int a;
	void funcA(){
		cout<<"private ";

	}
	protected:
	int b;
	void funcB(){
		cout<<"protected ";
	}
	public:
	int c;
	void funcC(){
		cout<<"public"<<endl<<c;

	}
};
int main (){

	A obj;
	obj.c=3;
	obj.funcC();

	return 0;
}

// #include <iostream>
// using namespace std;
// class A {
// public:
// int a;
// void funcA() {
// cout << "Func A\n";
// }
// private:
// int b;
// void funcB() {
// cout << "Func B\n";
// }
// protected:
// int c;
// void funcC() {
// cout << "Func C\n";
// }
// };
// int main() {
// A obj;
// obj.funcA();
// obj.funcB();
// }