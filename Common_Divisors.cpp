#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	long long x, g, cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> x;
		if ( !i ) g = x;
		else g = __gcd( g, x ); 
	}

	for ( long long i = 1; i * i <= g; i++ ) {
		if ( g % i == 0 ) {
			if ( i != ( g / i ) ) cnt += 2;
			else cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}