#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	set<pair<int, int>> h;
	for (int i = 0; i < n; ++i) {
		int cur; cin >> cur;
		h.insert({cur, i});
	}

	for (int i = 0; i < m; ++i) {
		int cur; cin >> cur;
		auto it = h.lower_bound({cur + 1, 0});

		if (it == h.begin()) {
			cout << "-1\n";
		} else {
			--it;
			cout << (*it).first << '\n';
			h.erase(it);
		}
	}

	return 0;
}