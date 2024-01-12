#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void toh(int n, int from, int to, int aux) {
	if (n == 1)
		cout << from << " " << to << "\n";
	else {
		toh(n - 1, from, aux, to);
		cout << from << " " << to << "\n";
		toh(n - 1, aux, to, from);
	}
}
 
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	int n;
	cin >> n;
 
	cout << (1 << n) - 1 << "\n";
	toh(n, 1, 3, 2);
 
	return 0;
}