#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	int n;
	cin >> n;
 
	vector<int> a, b;
 
	for (int i = 0; i < n; ++i) {
		int cur;
		cin >> cur;
		a.push_back(cur);
		cin >> cur;
		b.push_back(cur);
	}
 
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
 
	int res = 0;
	int cur = 0;
 
	int i = 0, j = 0;
 
	while (i < (int)a.size() && j < (int)b.size()) {
		if (a[i] < b[j]) {
			++cur;
			++i;
		} else if (a[i] > b[j]) {
			--cur;
			++j;
		}
 
 
		if (cur > res) {
			res = cur;
		}
	}
 
	cout << res << "\n";
 
	return 0;
}