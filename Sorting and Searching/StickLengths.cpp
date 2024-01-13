#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
 	int n;
	cin >> n;

	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	sort(a, a+n);

	ll total = 0, median = a[n/2];
	for (int i = 0; i < n; ++i)
		total += abs(a[i] - median);

	cout << total << '\n';

	return 0;
}