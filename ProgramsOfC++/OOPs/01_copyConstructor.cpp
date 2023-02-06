#include<iostream>
#include<string>
using namespace std;
class student{
	public:
	string name;
	int age;
	student(){//it made shallow copy 
	//pointer get copy but the location they point dont get copy 
		cout<<"default constructor"<<endl;
	}
	student(string s,int a){
	name = s;
	age = a;
		cout<<"parameterised constructor"<<endl;
	}
	student(student &a){//it made deep copy
		name = a.name;
		age = a.age;
		cout<<"copy constructor"<<endl;
	}

	bool operator == (student &a){
		if (name == a.name && age == a.age){
			
			return true;
		}
	
		return false;
	}
	~student(){
		cout<<"destroyed"<<endl;
	}
};
int main(){
	student a("gagan",20);
	student b;
	student c = a;
	if (c == a){
		cout<<"same"<<c.name;
	}
	else{
		cout<<" not safe"<<endl;
	}
	return 0;
}