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
		vector<int> a(n), smx(n), b;

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		set<int> st;

		int val = 0;

		for ( int i = n-1; i >= 0; i-- ) {
			st.insert( a[i] );
			while( st.count( val ) ) val++;
			smx[i] = val;
		}

		for ( int i = 0; i < n; ) {
			int j = i;
			val = 0;
			st.clear();
			while ( j < n ) {
				st.insert( a[j++] );
				while( st.count( val ) ) val++;
				if ( val == smx[i] ) break;
			}
			b.push_back( val );
			i = j;
		}

		cout << b.size() << "\n";
		for ( int i = 0; i < b.size(); i++ ) cout << b[i] << " \n"[i + 1 == b.size()];
	}

	return 0;
}