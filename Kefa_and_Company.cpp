#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, d;
	cin >> n >> d;
	vector<pair<int, int>> v(n);

	for ( auto &[x, y] : v ) cin >> x >> y;

	sort( v.begin(), v.end() );

	ll mx = 0, cur = 0;

	for ( int i = 0, j = 0; i < n; i++ ) {
		while ( j < n && v[j].first - v[i].first < d ) {
			cur += v[j].second;
			j++;
		}
		mx = max( mx, cur );
		cur -= v[i].second;
	} 

	cout << mx << "\n";

	return 0;
}