#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		vector<pair<int, int>> v(n);

		for ( auto &[x, y] : v ) cin >> x >> y;

		sort( v.begin(), v.end() );

		long long cnt = 0;

		ordered_set<int> ost;

		for ( auto [x, y] : v ) {
			cnt += ost.size() - ost.order_of_key( y );
			ost.insert( y );
		}

		cout << cnt << "\n";
	}

	return 0;
}