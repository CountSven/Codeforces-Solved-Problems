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
		int q[n];

		for ( int i = 0; i < n; i++ ) cin >> q[i];

		set<int> st;
		
		for ( int i = 1; i <= n; i++ ) st.insert( i );

		for ( int i = 0; i < n; i++ ) {
			if ( st.find( q[i] ) != st.end() ) {
				cout << q[i] << " ";
				st.erase( q[i] );
			}
			else {
				cout << *st.begin() << " ";
				st.erase( *st.begin() );
			}
		}
		cout << "\n";

		for ( int i = 1; i <= n; i++ ) st.insert( i );
	
		for ( int i = 0; i < n; i++ ) {
			if ( st.find( q[i] ) != st.end() ) {
				cout << q[i] << " ";
				st.erase( q[i] );
			}
			else {
				auto it = st.upper_bound( q[i] );
				it--;
				cout << *it << " ";
				st.erase( *it );
			}
		}
		cout << "\n";
	}

	return 0;
}