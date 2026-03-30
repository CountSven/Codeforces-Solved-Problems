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
		int a[n];

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( i % 2 ) a[i] = -a[i];
		}

		long long sum = 0, f = 0;

		set<long long> st;

		st.insert( sum );

		for ( int i = 0; i < n; i++ ) {
			sum += a[i];

			if ( st.find( sum ) != st.end() ) {
				f = 1;
				break;
			}
			
			st.insert( sum );
		}

		if ( f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}