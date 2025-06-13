#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k, x;
		cin >> n >> k >> x;

		bool isPos = true;

		vector<int> v;

		if ( k == 1 && x == 1 ) isPos = false;
		else {
			if ( x != 1 ) {
				while ( n-- ) v.push_back( 1 );
			}
			else {
				if ( k <= 2 ) {
					if ( n % 2 ) isPos = false;
					else {
						int d = n / 2;
						while ( d-- ) v.push_back( 2 );
					}
				}
				else {
					if ( n % 2 ) {
						int d = n / 2 - 1;
						while ( d-- ) v.push_back( 2 );
						v.push_back( 3 );
					}
					else {
						int d = n / 2;
						while ( d-- ) v.push_back( 2 );
					}
				}
			}
		}

		if ( isPos ) {
			cout << "YES" << "\n";
			cout << v.size() << "\n";
			for ( auto u : v ) cout << u << " ";
			cout << "\n";
		}
		else cout << "NO" << "\n";
	}

	return 0;
}