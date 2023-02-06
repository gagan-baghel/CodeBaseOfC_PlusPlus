#include<iostream>
#include<string>
using namespace std;
void subSeq(string s,string ans){
	if(s.length()==0){
		cout<<"|"<<ans<<"|"<<endl;
		return;
	}
	char ch =s[0];  
	int code=s[0];
	string ros = s.substr(1);
	subSeq(ros,ans);
	subSeq(ros, ans+ch);
	// subSeq(ros,ans+to_string(code));//for ascii value
}


void vari(string s , string ans){
	if(s.length()==0) {cout<<"|"<<ans<<"|"<<endl;return;}
	char ch=s[0];
	vari(s.substr(1),ans+ch);
	vari(s.substr(1),ans);

}



int main(){
	subSeq("ABC","");
	vari("ABC","");
	return 0;
}