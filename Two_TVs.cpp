#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);

	for ( auto &[x, y] : v ) cin >> y >> x;

	sort( v.begin(), v.end() );

	multiset<int> mst = { -1, -1 };

	for ( auto [x, y] : v ) {
		auto it = mst.lower_bound( y );
		if ( it == mst.begin() ) {
			cout << "NO" << "\n";
			return 0;
		}
		it--;
		mst.erase( mst.find( *it ) );
		mst.insert( x );
	}

	cout << "YES" << "\n";

	return 0;
}