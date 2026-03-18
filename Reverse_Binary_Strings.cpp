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
		string s;
		cin >> n >> s;

		int cnt = 1;

		vector<int> cnt0, cnt1;

		for ( int i = 1; i < n; i++ ) {
			if ( s[i] != s[i-1] ) {
				if ( s[i-1] == '0' ) cnt0.push_back( cnt );
				else cnt1.push_back( cnt );
				cnt = 1;	
			}
			else cnt++;
		}

		if ( s[n-1] == '0' ) cnt0.push_back( cnt );
		else cnt1.push_back( cnt );

		sort( cnt0.rbegin(), cnt0.rend() );
		sort( cnt1.rbegin(), cnt1.rend() );

		// for ( auto u : cnt0 ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : cnt1 ) cout << u << " ";
		// cout << "\n\n";

		int res0 = 0, res1 = 0;

		for ( auto u : cnt0 ) res0 += u - 1;
		for ( auto u : cnt1 ) res1 += u - 1;

		cout << max( res0, res1 ) << "\n";	
	}

	return 0;
}