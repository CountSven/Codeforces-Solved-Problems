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
		vector<int> a(n), w(k);

		for ( int i = 0; i < n; i++ ) cin >> a[i];
		for ( int i = 0; i < k; i++ ) cin >> w[i];

		sort( a.rbegin(), a.rend() );
		sort( w.begin(), w.end() );

		long long res = 0;

		for ( int i = 0; i < k; i++ ) {
			w[i]--;
			if ( !w[i] ) res += ( 2LL * a[i] );
			else res += a[i];
		}

		for ( int i = 0, j = k-1; i < k; i++ ) {
			if ( !w[i] ) continue;
			j += w[i];
			res += a[j];
		}

		cout << res << "\n";
	}

	return 0;
}