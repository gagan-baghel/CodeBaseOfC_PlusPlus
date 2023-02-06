#include<iostream>
using namespace std;

class Complex{
	private :
	int real,imag;
	public:
	Complex(int r =0,int i =0){
		real = r;
		imag=i;
	}
	Complex operator + (Complex const &a){ //a symbolise the second object
		Complex res;
		res.imag=imag+a.imag;
		cout<<imag<<" "<<a.imag<<endl;
		res.real=real+a.real;
		cout<<real<<" "<<a.real<<endl;
		return res; 
	}
	void display(){
		cout<<real<<"+ i"<<imag;
	}
};
int main(){
	Complex c1(10,20);
	Complex c2(30,40);
	Complex c3 = c1+c2;
	c3.display();
	return 0;
}