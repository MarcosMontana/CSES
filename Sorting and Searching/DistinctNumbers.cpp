#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	int n;
	cin >> n;
 
	vector<int> v;
	for (int i = 0; i < n; ++i) {
		int cur;
		cin >> cur;
 
		v.push_back(cur);
	}
 
	sort(v.begin(), v.end());
 
	int res = 1;
	int cur = v[0];
 
	for (int i = 1; i < n; ++i) {
		if (cur != v[i]) {
			++res;
			cur = v[i];
		}
	}
 
	cout << res << '\n';
 
	return 0;
}