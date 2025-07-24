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
		int a[n], b[n];

		int mnA = INT_MAX, mnB = INT_MAX;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mnA = min( mnA, a[i] );
		}

		for ( int i = 0; i < n; i++ ) {
			cin >> b[i];
			mnB = min( mnB, b[i] );
		}

		long long totA = 0, totB = 0;

		for ( int i = 0; i < n; i++ ) totA += ( mnB + a[i] );

		for ( int i = 0; i < n; i++ ) totB += ( mnA + b[i] );

		cout << min( totA, totB ) << "\n";
	}

	return 0;
}