#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	int n, m, k;
	cin >> n >> m >> k;
 
	vector<int> a, b;
	a.resize(n);
	b.resize(m);
 
	for (int i = 0; i < n; ++i)
		cin >> a[i];
 
	for (int i = 0; i < m; ++i)
		cin >> b[i];
 
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
 
	int res = 0;
 
	int app = 0, apt = 0;
	while (app < n && apt < m) {
		if (b[apt] - k <= a[app] && a[app] <= b[apt] + k) {
			++res;
			++app;
			++apt;
		} else if (b[apt] - k < a[app]) {
			++apt;
		} else {
			++app;
		}
	}
 
	cout << res << '\n';
 
	return 0;
}