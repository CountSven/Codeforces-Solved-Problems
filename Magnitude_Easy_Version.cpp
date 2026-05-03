#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, x, mn = 0, mx = 0;
		cin >> n;

		for ( int i = 0; i < n; i++ ) {
			cin >> x;
			mn += x;
			mx += x;
			mx = max( abs(mn), abs(mx) );
		}

		cout << mx << "\n";
	}

	return 0;
}