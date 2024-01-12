#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		ll a = i*i;
		ll b = a*(a-1)/2;

		if (i > 2)
			b -= 4*(i-1)*(i-2);

		cout << b << '\n';
	}
	

	return 0;
}