#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		int res = 2;

		if ( is_sorted( v.begin(), v.end() ) ) res = 0;
		else if ( v[0] == 1 || v[n-1] == n ) res = 1;
		else if ( v[0] == n && v[n-1] == 1 ) res = 3;

		cout << res << "\n";
	}

	return 0;
}