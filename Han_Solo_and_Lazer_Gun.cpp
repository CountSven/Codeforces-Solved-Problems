#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, x, y;
	cin >> n >> x >> y;

	set<pair<int, int>> st;

	for ( int i = 0; i < n; i++ ) {
		int xx, yy;
		cin >> xx >> yy;
		
		xx -= x;
		yy -= y;

		int g = __gcd( xx, yy );

		xx /= g;
		yy /= g;

		if ( st.find( { xx, yy } ) == st.end() ) {
			st.insert( { xx, yy } );
			xx *= -1;
			yy *= -1;
			st.insert( { xx, yy } );
		}
	}

	cout << (int)st.size() / 2 << "\n";

	return  0;
}