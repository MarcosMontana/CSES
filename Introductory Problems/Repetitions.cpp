#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	string s;

	cin >> s;
	int res = 1;
	int cur = 1;

	for (int i = 1; i < (int)s.size(); ++i) {
		if (s[i] == s[i - 1]) {
			++cur;
			if (cur > res)
				res = cur;
		} else {
			cur = 1;
		}
	}

	cout << res << '\n';

	return 0;
}