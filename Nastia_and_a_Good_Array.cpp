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
		int a[n];

		int mn = 1e9, mnIdx = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] < mn ) {
				mn = a[i];
				mnIdx = i;
			}
		}

		vector<pair<pair<int, int>, pair<int, int>>> v;

		int cur = mn+1;

		for ( int i = mnIdx-1; i >= 0; i-- ) {
			a[i] = cur;
			v.push_back( { { mnIdx+1, i+1 }, { mn, cur++ } } );
		}

		cur = mn+1;

		for ( int i = mnIdx+1; i < n; i++ ) {
			a[i] = cur;
			v.push_back( { { mnIdx+1, i+1 }, { mn, cur++ } } );
		}

		// for ( int i = 0; i < n; i++ ) cout << a[i] << " ";
		// cout << "\n";

		cout << v.size() << "\n";
		for ( auto [x, y] : v ) {
			auto [p, q] = x;
			auto [r, s] = y;
			cout << p << " " << q << " " << r << " " << s << "\n";
		}
	}

	return 0;
}