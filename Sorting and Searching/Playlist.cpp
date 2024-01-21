#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	int n;
	cin >> n;

	int v[n];
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	map<int, int> m;
	int res = 0, cur = 0, wi = 0;

	for (int i = 0; i < n; ++i) {
		int a = v[i];

		if (m.count(a) != 0) {
			int limit = m[v[i]];
			for (;wi <= limit; ++wi) {
				m.erase(v[wi]);
				--cur;
			}
		}

		m[a] = i;
		++cur;

		if (res < cur)
			res = cur;
	}

	cout << res << "\n";

	return 0;
}