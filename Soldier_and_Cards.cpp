#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	deque<int> d1, d2, tmp1, tmp2;

	int k1;
	cin >> k1;

	d1.resize( k1 );
	tmp1.resize( k1 );

	for ( int i = 0; i < k1; i++ ) {
		cin >> d1[i];
		tmp1[i] = d1[i];
	}

	int k2;
	cin >> k2;

	d2.resize( k2 );
	tmp2.resize( k2 );

	for ( int i = 0; i < k2; i++ ) {
		cin >> d2[i];
		tmp2[i] = d2[i];
	}

	int cnt = 0, res;

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
		int f = 1;
		if ( d1.size() == tmp1.size() && d2.size() == tmp2.size() ) {
			for ( int i = 0; i < d1.size(); i++ ) {
				if ( d1[i] != tmp1[i] ) f = 0;
			}
			for ( int i = 0; i < d2.size(); i++ ) {
				if ( d2[i] != tmp2[i] ) f = 0;
			}
		}
		else f = 0;
		if ( f || cnt > 1e7 ) {
			cnt = -1;
			break;
		}
	}

	if ( cnt == -1 ) cout << cnt << "\n";
	else cout << cnt << " " << res << "\n";

	return 0;
}