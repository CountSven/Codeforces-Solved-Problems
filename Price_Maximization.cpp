#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;

		long long cnt = 0;

		multiset<int> mst;

		for ( int i = 0, x; i < n; i++ ) {
			cin >> x;
			cnt += x / k;
			mst.insert( x % k );
		}

		while ( mst.size() ) {
			int cur = *mst.rbegin();
			mst.erase( mst.find( cur ) );

			int need = k - cur;
			auto it = mst.lower_bound( need );
			if ( it == mst.end() ) break;

			cnt++;
			mst.erase( mst.find( *it ) );
		}

		cout << cnt << "\n";
	}

	return 0;
}