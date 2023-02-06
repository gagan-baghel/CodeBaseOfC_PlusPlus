#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
	string s1 = "gaganbaghel";
	string s2 = "xyz";
	// cout<<s1.compare(s2);//
	// cout<<s1.empty(); //
	s1.erase(3,3);
	cout<<s1<<endl; 
	//cout<<s1.find("pan");
	// if(s1.find("bag")!=string::npos){
	// 	cout<<"found";
	// }
	// else{
	// 	cout<<"notf";
	// }
	// s2.insert(0,"gagan");
	// s1.size() || s1.length(); //show length of string;
	// cout<<s2<<endl;
	// //substring 
	// string s = s1.substr(2,10);
	// cout<<s;
	// string a = "667";
	// int x = stoi(a); // string to integer 
	// cout<<x+3;
	// cout<<to_string(x)+"8";
	// //sort  string
	// sort(s1.begin(),s1.end());
	// cout<<s1;
	return 0;

	}