#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	sort(a, a+n);

	ll res = 1;

	for (int i = 0; i < n && a[i] <= res; ++i) {
		res += a[i];
	}

	cout << res << '\n';

	return 0;
}
