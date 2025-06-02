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
		string s;
		cin >> s;

		string r = s;

		reverse( r.begin(), r.end() );

		int cnt = 0;

		for ( int i = 0; i < n/2; i++ ) {
			if ( s[i] == r[i] ) cnt++;
		}
		cout << cnt << "\n";
		if ( cnt == k ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}