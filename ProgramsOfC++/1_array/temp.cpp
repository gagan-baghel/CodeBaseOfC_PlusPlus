
#include <iostream>
#include <vector>
#include <typeinfo>
#include <stdio.h>
#include<unordered_map>
#include<string>
using namespace std;


int main()
{
    vector<int> a ;
    for(int i=0;i<7;i++){
        a.push_back(i);
    }
    auto p = find(a.begin(),a.end(), 3);
return 0;
}

