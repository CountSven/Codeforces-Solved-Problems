#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	if ( n >= m ) cout << n - m << "\n";
	else {
		int cnt = 0;

		while ( m > n ) {
			if ( m % 2 ) m++;
			else m /= 2;
			cnt++;
		}

		cout << cnt + abs( m - n ) << "\n";
	}

	return 0;
}