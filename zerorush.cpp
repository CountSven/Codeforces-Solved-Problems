#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n), pos, neg;

	int zer = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> v[i];

		if ( v[i] > 0 && v[i] % 2 == 0 ) pos.push_back( v[i] );
		else if ( v[i] < 0 && v[i] % 2 == 0 ) neg.push_back( v[i] );
		else if ( v[i] == 0 ) zer = 1;
	}

	if ( zer ) cout << 0 << "\n";
	else if ( pos.size() == 0 && neg.size() == 0 ) cout << -1 << "\n";
	else {
		int p = -1, n = -1;

		if ( pos.size() > 0 ) {
			sort( pos.begin(), pos.end() );
			p = pos[0];
		}

		if ( neg.size() > 0 ) {
			sort( neg.rbegin(), neg.rend() );
			n = abs( neg[0] );
		}

		if ( p != -1 && n != -1 ) cout << min( p/2, n/2 ) << "\n";
		else if ( p != -1 ) cout << p/2 << "\n";
		else if ( n != -1 ) cout << n/2 << "\n";
	}

	return 0;
}