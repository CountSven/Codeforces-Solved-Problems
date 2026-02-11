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
		string a, b;
		cin >> n >> a >> b;

		int cntZerA = 0, cntZerB = 0, cntOneA = 0, cntOneB = 0, f = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( a[i] == '0' ) cntZerA++;
			else cntOneA++;
			if ( b[i] == '0' ) cntZerB++;
			else cntOneB++;

			set<int> st;

			st.insert( cntZerA );
			st.insert( cntZerB );
			st.insert( cntOneA );
			st.insert( cntOneB );

			if ( st.size() > 2 ) {
				f = 1;
				break;
			}
		}

		if ( !f && cntZerA == cntZerB && cntOneA == cntOneB ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}