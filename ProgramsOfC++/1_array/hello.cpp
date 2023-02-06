
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
using namespace std;

spiralOrder(const vector<vector<int>> &A)
{
	vector<int> a;
	int sr = 0, er = A.size() - 1, sc = 0, ec = A[0].size() - 1;
	while (sr <= er && sc <= ec)
	{
		
		for (int i = sc; i <= ec; i++) a.push_back(A[sr][i]);
		sr++;

		for (int i = sr; i <= er; i++) a.push_back(A[i][ec]);
		ec--;

		for (int i = ec; i >= sc; i--) a.push_back(A[er][i]);
		er--;

		for (int i = er; i >= sr; i--) a.push_back(A[i][sc]);
		sc++;
	}
	return a;
}

int32_t main()
{

	return 0;
}