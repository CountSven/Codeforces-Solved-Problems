#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		long long a[n], b[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < n; i++ ) cin >> b[i];

		set<long long> mx;

		for ( int i = 0; i < n; i++ ) {
			if ( b[i] != -1 ) mx.insert( a[i] + b[i] );
		}

		if ( mx.size() > 1 ) cout << 0 << "\n";
		else {
			if ( mx.size() == 1 ) {
				long long need = 0;

				for ( auto u : mx ) need = u;

				bool isPos = true;

				for ( int i = 0; i < n; i++ ) {
					if ( b[i] == -1 ) {
						if ( need - a[i] > k || a[i] > need ) {
							isPos = false;
							break;
						}
					}
					if ( !isPos ) break;
				}

				if ( isPos ) cout << 1 << "\n";
				else cout << 0 << "\n";
			}
			else {
				long long mn = INT_MAX, mnCur = INT_MAX;

				for ( int i = 0; i < n; i++ ) mn = min( mn, a[i] );

				long long maxPos = mn + k;

				for ( int i = 0; i < n; i++ ) mnCur = min( mnCur, maxPos - a[i] );

				cout << mnCur+1 << "\n";
			}
		}
	}

	return 0;
}