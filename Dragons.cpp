#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long s, n;
	cin >> s >> n;
	vector<pair<long long, long long>> v(n);

	for ( int i = 0; i < n; i++ ) cin >> v[i].first >> v[i].second;

	sort( v.begin(), v.end() );

	bool isNxt = true;

	for ( int i = 0; i < n; i++ ) {
		if ( v[i].first < s ) s += v[i].second;
		else {
			isNxt = false;
			break;
		}
	}

	// cout << s << "\n";

	if ( isNxt ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}