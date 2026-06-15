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
		vector<int> v( n );

		int cur = 0;

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			string s = to_string( x );
			cur += (int)s.size();

			int zer = 0;

			int r = (int)s.size() - 1;

			while ( s[r] == '0' ) {
				zer++;
				r--;
			}

			v[i] = zer;
		}

		sort( v.rbegin(), v.rend() );

		for ( int i = 0; i < n; i += 2 ) cur -= v[i];

		if ( cur >= m+1 ) cout << "Sasha" << "\n";
		else cout << "Anna" << "\n";
	}

	return 0;
}