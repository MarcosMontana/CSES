#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int n;
	cin >> n;

	pair<int, int> v[n];

	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;

		v[i] = {a, b};
	}

	sort(v, v+n, cmp);

	int res = 1, cur = v[0].second;

	for (int i = 1; i < n; ++i) {
		if (cur <= v[i].first) {
			++res;
			cur = v[i].second;
		}
	}

	cout << res << "\n";

	return 0;
}