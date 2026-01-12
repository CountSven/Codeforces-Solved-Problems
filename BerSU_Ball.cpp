#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	int m;
	cin >> m;
	int b[m];

	for ( int i = 0; i < m; i++ ) cin >> b[i];

	sort( a, a + n );	
	sort( b, b + m );

	int mx = 1e9, cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < m; j++ ) {
			if ( abs( a[i] - b[j] ) <= 1 ) {
				cnt++;
				a[i] = mx;
				mx -= 5;
				b[j] = mx;
				mx -= 5;
			}
		}
	}

	cout << cnt << "\n";	

	return 0;
}