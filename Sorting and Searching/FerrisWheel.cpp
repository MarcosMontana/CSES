#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	int n, m;
	cin >> n >> m;
 
	vector<int> v;
	for (int i = 0; i < n; ++i) {
		int cur;
		cin >> cur;
 
		v.push_back(cur);
	}
 
	sort(v.begin(), v.end());
 
	int res = 0, i = 0, j = v.size() - 1;
 
	while (i < j) {
		if (v[i] + v[j] <= m)
			++i;
		
		++res;
		--j;
	}
 
	if (i == j) {
		++res;
	}
 
	cout << res << '\n';
 
	return 0;
}
