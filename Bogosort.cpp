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

		sort( v.rbegin(), v.rend() );

		for ( int i = 0; i < n; i++ ) cout << v[i] << " ";
		cout << "\n";

		// for ( int i = 0; i < n; i++ ) cout <<  ( i + 1 ) - v[i] << " ";
		// cout << "\n";
	}

	return 0;
}