#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m, q;
		cin >> n >> m >> q;
		int t1, t2, s;
		cin >> t1 >> t2 >> s;

		if ( t1 > t2 ) swap( t1, t2 );

		int d = 0;

		if ( s > t1 && s < t2 ) d = ( t2 - t1 ) / 2;
		else if ( s < t1 ) d = t1 - 1;
		else if ( s > t2 ) d =  n - t2;

		cout << d << "\n";
	}

	return 0;
}