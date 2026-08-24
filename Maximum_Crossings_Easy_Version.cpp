#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

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
		map<int, vector<int>> mp;

		for ( int i = 1, x; i <= n; i++ ) {
			cin >> x;
			mp[x].push_back( i );
		}

		ordered_set<int> ost;

		long long cnt = 0;

		for ( auto [u, v] : mp ) {
			for ( int i = v.size()-1; i >= 0; i-- ) {
				int pos = ost.order_of_key( v[i] );
				cnt += (int)ost.size() - pos;
				ost.insert( v[i] );
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}