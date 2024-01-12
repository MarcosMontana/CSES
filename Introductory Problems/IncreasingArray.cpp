#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int n;
	cin >> n;

	int cur, prev;
	cin >> prev;

	ll s = 0;

	for (int i = 1; i < n; ++i) {
		cin >> cur;

		if (prev > cur) {
			s += prev - cur;
		} else {
			prev = cur;
		}
	}

	cout << s << '\n';

	return 0;
}