#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long y, k, n;
	cin >> y >> k >> n;

	long long div = ( y + k - 1 ) / k;
	long long cur = k * div;

	vector<long long> v;

	while ( cur <= n ) {
		if ( cur - y >= 1 ) v.push_back( cur - y );
		cur = k * ( ++div );
	}

	if ( !v.size() ) cout << -1 << "\n";
	else {
		for ( auto u : v ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}