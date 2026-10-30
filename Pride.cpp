#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	int g = 0, cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		g = __gcd( g, a[i] );
		cnt += ( a[i] == 1 );
	}

	if ( cnt ) {
		cout << n - cnt << "\n";
		return 0;
	}

	if ( g > 1 ) {
		cout << -1 << "\n";
		return 0;
	}

	int len = n;

	for ( int i = 0; i < n; i++ ) {
		g = a[i];
		for ( int j = i+1; j < n; j++ ) {
			g = __gcd( g, a[j] );
			if ( g == 1 ) {
				len = min( len, j - i + 1 );
				break;
			}
		}
	}

	cout << len - 1 + n - 1 << "\n";

	return 0;
}