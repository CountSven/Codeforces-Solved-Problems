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
		string s[n];

		for ( int i = 0; i < n; i++ ) cin >> s[i];

		auto check = [&] ( char c ) {
			int a[n];

			for ( int i = 0; i < n; i++ ) {
				int cnt = 0;
				for ( char ch : s[i] ) cnt += ch == c;
				int rem = (int)s[i].size() - cnt; 
				a[i] = cnt - rem;
			}

			sort( a, a+n );
			reverse( a, a+n );

			int cur = 0, tot = 0;

			for ( auto u : a ) {
				cur += u;
				if ( cur > 0 ) tot++;
				else break;
			}

			return tot;
		};

		int res = 0;
		
		for ( char c = 'a'; c <= 'e'; c++ ) {
			res = max( res, check( c ) );
		}

		cout << res << "\n";
	}

	return 0;
}