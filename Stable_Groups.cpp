#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n, k, x, cnt = 1;
	cin >> n >> k >> x;
	vector<long long> v(n), cur;

	for ( int i = 0; i < n; i++ ) cin >> v[i];

	sort( v.begin(), v.end() );

	for ( int i = 1; i < n; i++ ) {
		if ( v[i] - v[i-1] > x ) {
			cur.push_back( v[i] - v[i-1] );
			cnt++;
		}
	}

	sort( cur.begin(), cur.end() );

	for ( auto u : cur ) {
		long long now = ( u - 1 ) / x;

		if ( k >= now ) {
			k -= now;
			cnt--;
		}
		else break;
	}

	cout << cnt << "\n";

	return 0;
}