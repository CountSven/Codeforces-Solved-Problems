#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n);

	for ( int i = 0; i < n; i++ ) cin >> v[i];

	sort( v.begin(), v.end() );

	int res = 0;

	for ( int i = 0; i < n; i++ ) {
		int rng = upper_bound( v.begin(), v.end(), v[i] + 5 ) - v.begin();

		res = max( res, rng - i );
	}

	cout << res << "\n";

	return 0;
}