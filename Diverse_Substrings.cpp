#include<bits/stdc++.h>
using namespace std;
using ll = long long;

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

		ll res = 0;

		for ( int i = 0; i < n; i++ ) {
			vector<int> freq( 10, 0 );
			int cnt = 0, mx = 0;
			for ( int j = i; j < min( i+100, n ); j++ ) {
				int d = s[j] - '0';
				if ( !freq[d] ) cnt++;
				mx = max( mx, ++freq[d] );
				if ( mx <= cnt ) res++; 
			}
		}

		cout << res << "\n";
	} 

	return 0;
}