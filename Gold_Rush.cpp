#include<bits/stdc++.h>
using namespace std;

bool check( int n, int m )
{
	int fp = n / 3;
	int sp = n - fp;

	// cout << fp << " " << sp << "\n";

	if ( fp == m || sp == m ) return true;
	
	bool fpn = ( fp % 3 == 0 ) && check( fp, m );
	bool spn = ( sp % 3 == 0 ) && check( sp, m );

	return fpn || spn;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, m;
		cin >> n >> m;

		if ( n == m ) cout << "YES" << "\n";
		else if ( n < m || n % 3 != 0 ) cout << "NO" << "\n";
		else {
			bool cur = check( n, m );

			if ( cur ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}