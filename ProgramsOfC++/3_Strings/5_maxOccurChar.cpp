#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	string a = "fhauifhauevfa";
	int b[26];
	for (int i = 0; i < 26; i++)
	{
		b[i] = 0;
	}
	for (int i = 0; i < a.size(); i++)
	{
		b[a[i] - 'a']++;
	}
	int max = 0;
	char ans = 'a';
	for (int i = 0; i < 26; i++)
	{
		if (b[i] > max)
		{
			max = b[i];
			ans = i + 'a';
		}
	}
	cout << ans << "  " << max;
}