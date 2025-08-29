#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, k, b, s;
		cin >> n >> k >> b >> s;

		if ( k * b <= s && s <=  k * b + ( n * ( k - 1 ) ) ) {
			vector<long long> v(n);
			
			v[0] = k * b;
			s -= v[0];

			for ( long long i = 0; i < n; i++ ) {
				long long cur = min( s, k-1 );
				v[i] += cur;
				s -= cur;
			}

			for ( auto u : v ) cout << u << " ";
			cout << "\n";
		}
		else cout << -1 << "\n";
	}

	return 0;
}