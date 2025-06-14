#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		int a[n];

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			a[i] = n - a[i] + 1;
		}

		for ( auto u : a ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}