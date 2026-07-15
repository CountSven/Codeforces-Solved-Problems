#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;
		vector<int> a(n), seq, res;

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		string s;
		cin >> s;

		int l = 0, r = n-1;

		for ( char c : s ) {
			if ( c == 'L' ) seq.push_back( l++ );
			else seq.push_back( r-- );
		}

		reverse( seq.begin(), seq.end() );

		// for ( auto u : seq ) cout << u << " ";
		// cout << "\n";

		long long mult = 1;

		for ( auto u : seq ) {
			mult *= a[u];
			mult %= m;
			res.push_back( mult );
		}

		reverse( res.begin(), res.end() );

		for ( auto u : res ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}