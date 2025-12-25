#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long a, b, l;
		cin >> a >> b >> l;

		set<long long> st;

		for ( long long i = 0; i <= 30; i++ ) {
			for ( long long j = 0; j <= 30; j++ ) {
				long long cur = pow( a, i ) * pow( b, j );

				if ( l % cur == 0 ) st.insert( l / cur );

				if ( cur >= l ) break;
			}
		}

		cout << (long long)st.size() << "\n";
	}

	return 0;
}