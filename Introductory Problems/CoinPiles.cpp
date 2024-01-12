#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int t; cin >> t;

	while (t--!=0) {
		int a, b;
		cin >> a >> b;

		if ((a + b) % 3 == 0) {
			int n = (a + b) / 3;
			if (a - n != 2*n - b) {
				cout << "NO\n";
			} else {
				int m = a - n;
				if (0 <= m && m <= n) {
					cout << "YES\n";
				} else {
					cout << "NO\n";
				}
			}
		} else
			cout << "NO\n";
	}

	return 0;
}