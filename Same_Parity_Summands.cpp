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

		int odRem = n, evRem = n;

		vector<int> od, ev;

		for ( int i = 1; i < k; i++ ) {
			od.push_back( 1 );
			odRem -= 1;
			ev.push_back( 2 );
			evRem -= 2;
		}

		if ( odRem > 0 && odRem % 2 ) {
			od.push_back( odRem );

			cout << "YES" << "\n";
			for ( auto u : od ) cout << u << " ";
			cout << "\n";
		}
		else if ( evRem > 0 && evRem % 2 == 0 ) {
			ev.push_back( evRem );

			cout << "YES" << "\n";
			for ( auto u : ev ) cout << u << " ";
			cout << "\n";
		}
		else cout << "NO" << "\n";
	}

	return 0;
}