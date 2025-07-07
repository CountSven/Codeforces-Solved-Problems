#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;

		if ( ( n * ( a - b ) ) <= ( c + d ) && ( n * ( a + b ) ) >= ( c - d ) ) cout << "YES" << "\n"; 
		else cout << "NO" << "\n";
	}

	return 0;
}