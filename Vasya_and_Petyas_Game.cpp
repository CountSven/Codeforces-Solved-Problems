#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n+5, 0), res;

	for ( int i = 2; i <= n; i++ ) {
		int f = 0;
		for ( int j = 2; j * j <= i; j++ ) {
			if ( i % j == 0 ) {
				f = 1;
				break;
			}
		}
		if ( !f ) v[i] = n;
	}

	for ( int i = 2; i <= n; i++ ) {
		if ( v[i] != n ) continue;
		for ( int j = 2 * i; j <= n; j += i ) v[j]++;
	}

	for ( int i = 2; i <= n; i++ ) {
		if ( v[i] == n || v[i] < 2 ) res.push_back( i ); 
	}

	cout << res.size() << "\n";
	for ( auto u : res ) cout << u << " ";
	cout << "\n";

	return 0;
}