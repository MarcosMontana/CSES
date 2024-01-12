#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	string s;
	cin >> s;

	sort(s.begin(), s.end());

	vector<string> ans;
	
	do {
		ans.push_back(s);
	} while (next_permutation(s.begin(), s.end()));

	cout << ans.size() << '\n';

	for (auto a : ans)
		cout << a << '\n';

	return 0;
}