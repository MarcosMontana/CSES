#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int n;
	cin >> n;

	ll v[n], total = 0;

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		total += v[i];
	}

	ll res = 1e9;

	for (int i = 0; i < 1<<n; ++i) {
		ll sum = 0;

		for (int j = 0; j < n; ++j) {
			if (i & (1<<j))
				sum += v[j];
		}

		if (abs(total - 2 * sum) < res) {
			res = abs(total - 2 * sum);
		}
	}

	cout << res << '\n';

	return 0;
}