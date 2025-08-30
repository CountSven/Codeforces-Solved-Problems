#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	int c0 = 0, c5 = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		if ( a[i] == 0 ) c0++;
		else c5++;
	}

	if ( c0 < 1 ) cout << -1 << "\n";
	else if ( c5 < 9 ) cout << 0 << "\n";
	else {
		int cur5 = ( c5 / 9 ) * 9;

		while ( cur5-- ) cout << 5;
		while ( c0-- ) cout << 0;
		cout << "\n";
	}

	return 0;
}