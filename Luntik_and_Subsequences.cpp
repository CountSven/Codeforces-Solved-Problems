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

		long long cnt = 0, cntZr = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] == 1 ) cnt++;
			else if ( a[i] == 0 ) cntZr++;
		}

		while ( cntZr-- ) cnt *= 2;

		cout << cnt << "\n";
	}

	return 0;
}