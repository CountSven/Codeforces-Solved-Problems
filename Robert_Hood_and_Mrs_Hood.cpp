#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, d, k;
		cin >> n >> d >> k;
		vector<pair<int, int>> v(k);

		for ( auto &[l, r] : v ) cin >> l >> r;

		sort( v.begin(), v.end() );
		
		multiset<int> mst;

		int mn = 1e9, mx = -1, mnPos = 1, mxPos = 1;

		for ( int i = 1, j = i+d-1, k = 0; j <= n; i++, j++ ) {
			while ( k < v.size() && v[k].first <= j ) mst.insert( v[k++].second );
			while( mst.size() && *mst.begin() < i ) mst.erase( mst.begin() );
			int sz = mst.size();
			if ( sz > mx ) {
				mx = sz;
				mxPos = i;
			}
			if ( sz < mn ) {
				mn = sz;
				mnPos = i;
			}
		}

		cout << mxPos << " " << mnPos << "\n";
	}

	return 0;
}