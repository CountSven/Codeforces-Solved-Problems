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
		vector<long long> v(n), pref(n+1), indL, indR;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			pref[i+1] = v[i] + pref[i];
		}

		string s;
		cin >> s;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == 'L' ) indL.push_back( i );
			else indR.push_back( i+1 );
		}

		reverse( indR.begin(), indR.end() );

		// for ( auto u : pref ) cout << u << " ";
		// cout << "\n";

		// for ( auto u : indL ) cout << u << " ";
		// cout << "\n";

		// for ( auto u : indR ) cout << u << " ";
		// cout << "\n";

		long long sum = 0, l = 0, r = 0;

		while ( l < indL.size() && r < indR.size() && indL[l] < indR[r] ) {
			sum += ( pref[indR[r++]] - pref[indL[l++]] );
		}

		cout << sum << "\n";
	}

	return 0;
}