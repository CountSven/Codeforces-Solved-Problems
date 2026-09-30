#include<bits/stdc++.h>
using namespace std;

int n;
string s;

bool check( int k )
{
	int cnt = 0;

	for ( int i = 0; i < k; i++ ) {
		map<char, int> mp;
		for ( int j = i; j < n; j += k ) mp[s[j]]++;
		if ( mp.size() > 2 ) return false;
		if ( mp.size() == 1 ) continue;
		cnt++;
		int c1 = 0, c2 = 0;
		for ( auto [x, y] : mp ) {
			if ( c1 ) c2 = y;
			else c1 = y; 
		}
		int cur = n / k;
		if ( c1 + 1 != cur && c2 + 1 != cur ) return false;
	}

	return cnt <= 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		cin >> n >> s;

		int res = n;

		for ( int i = 1; i * i <= n; i++ ) {
			if ( n % i ) continue;
			if ( check( i ) ) res = min( res, i );
			if ( check( n / i ) ) res = min( res, n / i );
		}

		cout << res << "\n";
	}

	return 0;
}