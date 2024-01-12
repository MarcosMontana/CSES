#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int t;
	cin >> t;

	while (t--!=0) {
		ll y, x;
		cin >> x >> y;

		if (x >= y) {
			if (x % 2 == 0) {
				cout << x * x - (y - 1) << '\n';
			} else {
				cout << (x - 1) * (x - 1) + y << '\n';
			}
		} else {
			if (y % 2 == 0) {
				cout << (y - 1) * (y - 1) + x << '\n';
			} else {
				cout << y * y - (x - 1) << '\n';
			}
		}
	}
	return 0;
}