#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	int n;
	cin >> n;

	ll res = -1e18, sum = -1e18;

	for (int i = 0; i < n; ++i) {
		ll cur;
		cin >> cur;

		sum = max(cur, sum + cur);
		res = max(res, sum);
	}

	cout << res << '\n';

	return 0;
}