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

		int cntEv = 0, cntOd = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] % 2 ) cntOd++;
			else cntEv++;
		}

		if ( cntEv >= 2 || cntOd >= 2 ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}