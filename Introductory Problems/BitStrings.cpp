#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int n; cin >> n;
	int MOD = 1e9+7;
	ll res = 1;
	for (int i = 0; i < n; ++i)
		res = (res * 2) % MOD;

	cout << res << '\n';
	return 0;
}