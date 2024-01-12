#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	ll n;
	cin >> n;
 
	ll target = n * (n + 1) / 4;
 
	if (n * (n + 1) % 4 != 0) {
		cout << "NO\n";
		return 0;
	}
 
	set<int> s1, s2;
 
	for (int i = 1; i <= n; ++i) {
		s1.insert(i);
	}
 
	for (int i = n; i >= 1; --i) {
		if (i <= target) {
			s1.erase(i);
			s2.insert(i);
			target -= i;
		}
	}
 
 
	cout << "YES\n";
	cout << s1.size() << '\n';
	for (auto a : s1)
		cout << a << " ";
	cout << '\n';
	cout << s2.size() << '\n';
	for (auto a : s2)
		cout << a << " ";
	cout << '\n';
 
	return 0;
}
