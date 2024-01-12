#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	int q;
	cin >> q;
 
	while (q--) {
		ll k;
		cin >> k;
 
		ll cur = 0;
		ll curnum = 0;
		ll n = 1;
		ll p = 9;
 
		while (cur + n * p < k) {
			cur += n * p;
			curnum += p;
			p *= 10;
			++n;
		}
 
		ll res = curnum + (k - cur + n - 1) / n;
 
		vector<int> digits;
		while (res) {
			digits.push_back(res % 10);
			res /= 10;
		}
		reverse(digits.begin(), digits.end());
 
		cout << digits[(k - cur + n - 1) % n] << '\n';
	}
 
	return 0;
}