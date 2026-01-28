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
		
		long long a = 0, b = 0, occ = 0;

		while ( !v.empty() ) {
			if ( occ % 2 == 0 ) {
				if ( v.back() % 2 == 0 ) a += v.back();
			}
			else {
				if ( v.back() % 2 ) b += v.back();
			}

			v.pop_back();
			occ++;
		}

		if ( a > b ) cout << "Alice" << "\n";
		else if ( a < b ) cout << "Bob" << "\n";
		else cout << "Tie" << "\n";
	}

	return 0;
}