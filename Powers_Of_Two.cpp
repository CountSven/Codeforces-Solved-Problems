#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v;

	for ( int i = 1; i < 31; i++ ) {
		int cur = 1 << i;
		cur--;
		if ( cur > 1e9 ) break;
		else v.push_back( cur );
	}

	// for ( auto u : v ) cout << u << "\n";

	int n, k;
	cin >> n >> k;
	
	if ( n < k ) cout << "NO" << "\n";
	else {
		int a[k];

		for ( int i = 0; i < k; i++ ) {
			a[i] = 1;
			n--;
		}

		for ( int i = 0; i < k; i++ ) {
			int cur = 0;
			for ( auto u : v ) {
				if ( u <= n ) cur = u;
				else break;
			}
			a[i] += cur;
			n -= cur;
		}

		if ( n != 0 ) cout << "NO" << "\n";
		else {
			cout << "YES" << "\n";
			reverse( a, a+k );
			for ( auto u : a ) cout << u << " ";
			cout << "\n";
		}
	}

	return 0;
}