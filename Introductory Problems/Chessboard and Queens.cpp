#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int ans;
string m[8];
bool r[8], c[8], d1[15], d2[15];

void solve(int n, int sx, int sy) {
	if (n == 8) {
		++ans;
		return;
	}

	int i = sx, j = sy;
	if (j == 8) {
		j = 0;
		++i;
	}

	while (i < 8) {
		if (m[i][j] == '.' && !r[i] && !c[j] && !d1[7 + i - j] && !d2[i + j]) {
			r[i] = c[j] = d1[7 + i - j] = d2[i + j] = true;
			solve(n + 1, i, j + 1);
			r[i] = c[j] = d1[7 + i - j] = d2[i + j] = false;
		}

		if (++j == 8) {
			j = 0;
			++i;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	for (int i = 0; i < 8; ++i) {
		cin >> m[i];
	}

	for (int i = 0; i < 8; ++i) {
		r[i] = c[i] = false;
	}
	for (int i = 0; i < 15; ++i) {
		d1[i] = d2[i] = false;
	}

	ans = 0;
	solve(0, 0, 0);

	cout << ans << '\n';

	return 0;
}	