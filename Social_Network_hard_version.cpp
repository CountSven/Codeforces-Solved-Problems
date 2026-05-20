#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	deque<int> dq;
	set<int> st;

	while ( n-- ) {
		int id;
		cin >> id;

		if ( !dq.size() ) {
			dq.push_front( id );
			st.insert( id );
		}
		else {
			if ( st.find( id ) == st.end() ) {
				if ( dq.size() == k ) {
					st.erase( *st.find( dq.back() ) );
					dq.pop_back();
					dq.push_front( id );
					st.insert( id );
				}
				else {
					dq.push_front( id );
					st.insert( id );
				}
			}
		}
	}

	cout << dq.size() << "\n";
	for ( auto u : dq ) cout << u << " ";
	cout << "\n";

	return 0;
}