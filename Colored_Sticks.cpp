#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	int mx = 1;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];

		if ( a[i] >= 4 ) {
			int cur = ceil( ( 1.0 ) * a[i] / 3 );
			mx = max( mx, cur );
		}
	}

	cout << mx << "\n";

	return 0;
}