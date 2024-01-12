#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	int n;
	cin >> n;

	ll s = 0;
	for (int i = 0; i < n - 1; ++i) {
		int cur;
		cin >> cur;
		s += cur;
	}

	cout << (ll)n*(n+1)/2 - s << '\n';
	
	return 0;
}