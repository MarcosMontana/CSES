#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	string s;
	cin >> s;

	int a[26]={};

	for (int i = 0; i < (int)s.size(); ++i) {
		a[s[i] - 'A']++;
	}

	int imposs = 0;
	int existsOdd = 0;
	for (int i = 0; i < 26 && !imposs; ++i) {
		if (a[i] % 2 == 1)
			++existsOdd;
	}

	string res = "";
	if (s.size() % 2 == 0) {
		if (existsOdd != 0) {
			cout << "NO SOLUTION\n";
			return 0;
		}

		for (int i = 0; i < 26; ++i) {
			if (a[i] == 0)
				continue;

			for (int j = 0; j < a[i]/2; ++j)
				res += ('A'+i);
		}
		cout << res;
		reverse(res.begin(), res.end());
		cout << res;
	} else {
		if (existsOdd != 1) {
			cout << "NO SOLUTION\n";
			return 0;
		}
		
		for (int i = 0; i < 26; ++i) {
			if (a[i] < 2)
				continue;

			for (int j = 0; j < a[i]/2; ++j)
				res += ('A'+i);
		}
		cout << res;
		for (int i = 0; i < 26; ++i) {
			if (a[i] % 2 == 1) {
				cout << (char)('A'+i);
				break;
			}
		}
		reverse(res.begin(), res.end());
		cout << res;
	}

	return 0;
}