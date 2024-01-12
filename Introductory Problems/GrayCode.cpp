#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int n;
	cin >> n;

	vector<string> v;
	v.push_back("");

	for (int i = 0; i < n; ++i) {
		for (int j = v.size() - 1; j >= 0; --j) {
			v.push_back(v[j]);
		}

		for (int j = 0; j < (int)v.size() / 2; ++j) {
			v[j] += "0";
		}
		for (int j = v.size() / 2; j < (int)v.size(); ++j) {
			v[j] += "1";
		}
	}

	for (auto a : v)
		cout << a << "\n";

	return 0;
}