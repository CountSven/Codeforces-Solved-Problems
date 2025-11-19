#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(m+1);
	vector<string> bit(m+1);


	for ( int i = 0; i <= m; i++ ) {
		cin >> a[i];

		int cur = a[i];
		string s = "";

		while ( cur != 0 ) {
			int val = cur % 2;
			s += ( val + '0' );
			cur /= 2;
		}

		while( s.size() != n ) s += '0';
		reverse( s.begin(), s.end() );

		bit[i] = s;
	}

	// for ( auto u : bit ) cout << u << "\n";

	string cmp = bit[m];

	int cnt = 0;

	for ( int i = 0; i < m; i++ ) {
		string now = bit[i];
		int occ = 0;

		for ( int j = 0; j < n; j++ ) {
			if ( now[j] != cmp[j] ) occ++;

			if ( occ > k ) break;
		}

		if ( occ <= k ) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}