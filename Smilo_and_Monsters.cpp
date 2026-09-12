#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		int a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		sort( a, a+n );  
		reverse( a, a+n );

		ll sum = accumulate( a, a+n, 0LL );
		ll res = ( sum + 1 ) / 2;
		ll rem = sum / 2, i = 0;

		while ( rem > 0 && i < n ) {
			rem -= a[i++];
			res++;
		}

		cout << res << "\n";
	}

	return 0;
}