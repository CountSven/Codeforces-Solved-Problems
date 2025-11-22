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
		vector<int> v(n);

		int cntNeg = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			if ( v[i] < 0 ) {
				cntNeg++;
				v[i] = abs( v[i] );
			}
		}

		long long sum = accumulate( v.begin(), v.end(), 0LL );

		if ( cntNeg % 2 ) {
			sort( v.begin(), v.end() );

			cout << ( 1LL * sum - ( 2 * v[0] ) ) << "\n";
		}
		else cout << (1LL * sum ) << "\n";
	}

	return 0;
}