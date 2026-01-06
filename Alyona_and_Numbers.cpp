#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	if ( n > m ) swap( n, m );

	long long cnt = 0;

	for ( int i = 1; i <= n; i++ ) {
		int cur = 5 - ( i % 5 );
		int tot = ( m - cur ) / 5;
		tot++;

		if ( i + m >= 5 ) cnt += tot;		
	}

	cout << cnt << "\n";

	return 0;
}