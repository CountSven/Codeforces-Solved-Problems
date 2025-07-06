#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, f, a, b;
		cin >> n >> f >> a >> b;
		vector<long long> v(n+1);

		v[0] = 0;

		for ( long long i = 1; i <= n; i++ ) {
			cin >> v[i];
			if (  ( v[i] - v[i-1] ) * a < b ) f -= ( ( v[i] - v[i-1] ) * a );
			else f -= b;
		}

		if ( f > 0 ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}