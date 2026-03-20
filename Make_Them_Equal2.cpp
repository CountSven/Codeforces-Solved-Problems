#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<int> st;

	for ( int i = 0; i < n; i++ ) {
		int x;
		cin >> x;
		st.insert( x );
	} 

	if ( st.size() == 1 ) cout << 0 << "\n";
	else if ( st.size() == 2 ) {
		int a = 0, b = 0;

		for ( auto u : st ) {
			if ( !a ) a = u;
			else if ( !b ) b = u;  
		}

		int diff = b - a;

		if ( diff % 2 ) cout << diff << "\n";
		else cout << diff / 2 << "\n";
	}
	else if ( st.size() == 3 ) {
		int a = 0, b = 0, c = 0;

		for ( auto u : st ) {
			if ( !a ) a = u;
			else if ( !b ) b = u; 
			else if ( !c ) c = u; 
		}

		if ( b - a == c - b ) cout << b - a << "\n";
		else cout << -1 << "\n";
	}
	else cout << -1 << "\n";

	return 0;
}