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
		int a[n];

		int cntOdd = 0, cntEv = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] % 2 ) cntOdd++;
			else cntEv++;
		}

		if ( cntOdd == n || cntEv == n ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}