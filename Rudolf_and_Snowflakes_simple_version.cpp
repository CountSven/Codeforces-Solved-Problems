#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	set<int> st;

	for ( int i = 2; i <= 1000; i++ ) {
		int cur = ( i * i ) + i + 1;
		if ( cur > 1000000 ) break;
		else {
			st.insert( cur );
			for ( int j = 3; j < 30; j++ ) {
				cur += (int)pow(i, j);
				if ( cur > 1000000 ) break;
				else st.insert( cur );
			}
		}
	}

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;

		if ( st.find( n ) != st.end() ) cout << "YES" << "\n";
		else cout << "NO" << "\n"; 
	}

	return 0;
}