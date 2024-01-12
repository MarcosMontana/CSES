#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int n; cin >> n;

	ll res = 0;

	while (n > 0) {
		res += n / 5;
		n /= 5;
	}

	cout << res << '\n';

	return 0;
}