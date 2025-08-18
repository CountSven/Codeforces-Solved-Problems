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
		vector<int> a(n);

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		int m;
		cin >> m;
		vector<int> b(m);

		for ( int i = 0; i < m; i++ ) cin >> b[i];

		vector<int> prefA(n), prefB(m);

		prefA[0] = a[0];
		prefB[0] = b[0];

		for ( int i = 1; i < n; i++ ) prefA[i] = prefA[i-1] + a[i];
		for ( int i = 1; i < m; i++ ) prefB[i] = prefB[i-1] + b[i];

		// for ( auto u : prefA ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : prefB ) cout << u << " ";
		// cout << "\n";

		int curSum1 = *max_element( prefA.begin(), prefA.end() );
		int curSum2 = *max_element( prefB.begin(), prefB.end() );

		cout << max( 0, curSum1 ) + max( 0, curSum2 ) << "\n";
	}

	return 0;
}