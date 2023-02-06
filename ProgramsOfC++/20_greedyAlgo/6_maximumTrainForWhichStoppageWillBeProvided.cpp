#include <iostream>
#include <vector>
using namespace std;
#define n 2
#define m 5
int maxStop(int arr[][3])
{
	vector<pair<int, int>> vect[n + 1];
	for (int i = 0; i < m; i++)
		vect[arr[i][2]].push_back(make_pair(arr[i][1], arr[i][0]));
	for (int i = 0; i <= n; i++)
		sort(vect[i].begin(), vect[i].end());
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (vect[i].size() == 0)
			continue;
		count++;
		int x = 0;
		for (int j = 1; j < vect[i].size(); j++)
		{
			if (vect[i][j].first >= vect[i][x].second)
			{
				x = j;
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int arr[m][3] = {1000, 1030, 1,
			 1010, 1020, 1,
			 1025, 1040, 1,
			 1130, 1145, 2,
			 1130, 1140, 2};
	cout << "Maximum Stopped Trains = "
	     << maxStop(arr);
	return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;
// struct data
// {
// 	int x = 0, y = 0, z = 0;
// };
// bool comp(vector<data> a, vector<data> b)
// {
// 	if (a.z == b.z)
// 	{
// 		if (a.y == b.y)
// 			return a.x < b.x;
// 		else
// 			return a.y < b.y;

// 	}
// 	return a.z < b.z;
// }

// int maxStopage(int ari[], int dep[], int plat[], int n)
// {
// 	vector<data> v;
// 	for (int i = 0; i < n; i++)
// 		v.push_back({ari[i], dep[i], plat[i]});
// 	sort(v.begin(), v.end(), comp);

// 	for(int i=0;i<*max_element(plat,plat+n);i++){

// 	}

// }
// int main()
// {
// 	int ari[] = {};
// 	int dep[] = {};
// 	int plat[] = {};
// 	int n = sizeof(ari) / sizeof(ari[0]);
// 	cout<<maxStopage(ari[]),dep[],n);
// 	return 0;
// }
