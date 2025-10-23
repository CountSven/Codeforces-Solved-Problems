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

		sort( v.begin(), v.end() );

		int f = v[0], s = v[1];

		int idx = -1;

		// cout << f << " " << s << "\n";

		for ( int i = 1; i < n; i++ ) {
			if ( v[i] % f != 0 ) {
				s = v[i];
				break;
			}
			else idx = i+1;
		}

		// cout << idx << "\n";
		// cout << f << " " << s << "\n";

		bool isPos = true;

		if ( idx != -1 && idx < n ) {
			for ( int i = idx; i < n; i++ ) {
				if ( v[i] % f != 0 && v[i] % s != 0 ) {
					isPos = false;
					break;
				}
			}
		}
		else {
			for ( int i = 2; i < n; i++ ) {
				if ( v[i] % f != 0 && v[i] % s != 0 ) {
					isPos = false;
					break;
				}
			}
		}

		if ( isPos ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}