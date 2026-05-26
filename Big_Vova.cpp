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
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		sort( v.rbegin(), v.rend() );
		
		cout << v[0] << " ";

		int g = v[0], cnt = 1;

		while ( cnt < n ) {
			int ng = 0, pos = 0;

			for ( int i = 1; i < n; i++ ) {
				if ( !v[i] ) continue;
				if ( !ng ) {
					ng = __gcd( g, v[i] );
					pos = i;
				}
				else {
					int curg = __gcd( g, v[i] );
					if ( curg > ng ) {
						ng = curg;
						pos = i;
					}
				}
			}

			cout << v[pos] << " ";
			v[pos] = 0;
			g = ng;
			cnt++;
		}
		cout << "\n";
	}

	return 0;
}