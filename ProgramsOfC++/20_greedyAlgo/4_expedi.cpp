#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, l, p;
		cin >> n;
		// dist from town // max fuel
		vector<pair<int, int> > a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i].first >> a[i].second;
		cin >> l >> p;

		for (int i = 0; i < n; i++)
			a[i].first = l - a[i].first;
		sort(a.begin(),a.end()); 
		int ans = 0, curr = p;
		priority_queue<int, vector<int> > prq;
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			if (curr >= l)
				break;
			while (curr < a[i].first)
			{
				if (prq.empty())
				{
					flag = 1;
					break;
				}
				ans++;
				curr += prq.top();
				prq.pop();
			}
			if (flag)
				break;
			prq.push(a[i].second);
		}
		if (flag)
		{
			cout << " -1 " << endl;
			continue;
		}
		while (!prq.empty() && curr < l)
		{
			curr += prq.top();
			prq.pop();
			ans++;
		}
		if (curr < l)
		{
			cout << " -1 ";
			continue;
		}
		cout << "minimum stops are " << ans << endl;
	}
	return 0;
}