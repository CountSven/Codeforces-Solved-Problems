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
		int a[n+1], b[n+1];

		for ( int i = 1; i <= n; i++ ) cin >> a[i];
		
		int mx = -INT_MAX, cnt = 0;

		for ( int i = 1; i <= n; i++ ) {
			cin >> b[i];
			a[i] -= b[i];
			mx = max( mx, a[i] );
		}

		vector<int> v;

		for ( int i = 1; i <= n; i++ ) {
			if ( a[i] == mx ) {
				cnt++;
				v.push_back( i );
			}
		}
		
		cout << cnt << "\n";
		for ( auto u : v ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}