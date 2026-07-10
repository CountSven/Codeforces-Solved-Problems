#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	deque<int> d1, d2;

	int k1;
	cin >> k1;

	d1.resize( k1 );

	for ( int i = 0; i < k1; i++ ) cin >> d1[i];

	int k2;
	cin >> k2;

	d2.resize( k2 );

	for ( int i = 0; i < k2; i++ ) cin >> d2[i];

	int cnt = 0, res;

	set<pair<deque<int>, deque<int>>> st;

	st.insert( { d1, d2 } );

	while ( 1 ) {
		if ( d1.front() > d2.front() ) {
			d1.push_back( d2.front() );
			d2.pop_front();
			d1.push_back( d1.front() );
			d1.pop_front();
		}
		else {
			d2.push_back( d1.front() );
			d1.pop_front();
			d2.push_back( d2.front() );
			d2.pop_front();
		}
		cnt++;
		// for ( auto u : d1 ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : d2 ) cout << u << " ";
		// cout << "\n";
		if ( !d2.size() ) {
			res = 1;
			break;
		}
		else if ( !d1.size() ) {
			res = 2;
			break;
		}
		if ( st.find( { d1, d2 } ) != st.end() ) {
			cnt = -1;
			break;
		}
		else st.insert( { d1, d2 } );
	}

	if ( cnt == -1 ) cout << cnt << "\n";
	else cout << cnt << " " << res << "\n";

	return 0;
}