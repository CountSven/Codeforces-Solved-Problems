#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	string s;
	cin >> s;

	deque<char> d;
	d.push_back( s[0] );

	if ( n % 2 ) {
		for ( int i = 1; i < n; i++ ) {
			if ( i % 2 ) d.push_front( s[i] );
			else d.push_back( s[i] );
		}
	}
	else {
		for ( int i = 1; i < n; i++ ) {
			if ( i % 2 ) d.push_back( s[i] );
			else d.push_front( s[i] );
		}
	}
	
	for ( auto u : d ) cout << u;
	cout << "\n";

	return 0;
}