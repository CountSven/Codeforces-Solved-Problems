#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b, n;
		cin >> a >> b >> n;
		int v[n];

		long long cnt = b;

		for ( int i = 0; i < n; i++ ) {
			cin >> v[i];
			if ( v[i] >= a ) cnt += ( a - 1 );
			else cnt += v[i];
		}

		cout << cnt << "\n";
	}

	return 0;
}