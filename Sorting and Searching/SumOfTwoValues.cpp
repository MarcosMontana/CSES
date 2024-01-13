#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	int n, x;
	cin >> n >> x;
 
	if (x == 1) { // Two non-zero positive numbers can't add up to 1
		cout << "IMPOSSIBLE\n";
		return 0;
	}

	unordered_map<int, int> m;

	for (int i = 1; i <= n; ++i) {
		int cur;
		cin >> cur;

		if (cur >= x) // Won't add up to x with another non-zero positive number
			continue;

		auto index = m.find(cur);

		if (index == m.end()) {
			m[x - cur] = i;
		} else {
			cout << m[cur] << " " << i << "\n";
			return 0;
		}
	}

 	cout << "IMPOSSIBLE\n";
	return 0;
}