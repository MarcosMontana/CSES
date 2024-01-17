#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	int n;
	cin >> n;

	int index[n + 1];
	for (int i = 0; i < n; ++i) {
		int cur;
		cin >> cur;
		index[cur] = i;
	}

	int cur = index[1], res = 1;
	for (int i = 2; i <= n; ++i) {
		if (index[i] < cur) {
			++res;
		}
		cur = index[i];
	}

	cout << res << "\n";

	return 0;
}
