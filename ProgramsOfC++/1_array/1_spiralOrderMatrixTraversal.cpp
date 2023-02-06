#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;
vector<int> spiralOrder(const vector<vector<int> > &A)
{
	int m = A.size(), n = A[0].size(); // 3,3
	int sr = 0, sc = 0, er = n - 1, ec = m - 1;
	vector<int> a;
	while (sr <= er and sc <= ec)
	{
		for (int i = sc; i <= ec; i++)
		{
			a.push_back(A[sr][i]);
		}
		sr++;
		for (int i = sr; i <= er; i++)
		{
			a.push_back(A[i][ec]);
		}
		ec--;
		for (int i = ec; i >= sc; i--)
		{
			a.push_back(A[er][i]);
		}
		er--;
		for (int i = er; i >= sr; i--)
		{
			a.push_back(A[i][sc]);
		}
		sc++;
	}
	return a;
}
int main()
{
	int a, b; // a = row b = column
	cin >> a >> b;
	vector<vector<int> > arr(a,vector<int> (b));
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	// spiral order print
	int startrow = 0, startcol = 0, endrow = a - 1, endcol = b - 1;
	while (startrow <= endrow && startcol <= endcol)
	{
		for (int col = startcol; col <= endcol; col++)
		{
			cout << arr[startrow][col] << " ";
		}
		startrow++;
		for (int row = startrow; row <= endrow; row++)
		{
			cout << arr[row][endcol] << " ";
		}
		endcol--;
		// if (startrow <= endrow)
		//{
		for (int col = endcol; col >= startcol; col--)
		{
			cout << arr[endrow][col] << " ";
		}
		//}
		endrow--;
		// if (startcol <= endcol)
		//{

		for (int row = endrow; row >= startrow; row--)
		{
			cout << arr[row][startcol] << " ";
		}
		//}
		startcol++;
	}


	vector<int> sol(a*b);
	sol=spiralOrder(arr);
	for(int i=0;i<a*b;i++) cout<<sol[i]<<" . ";
}