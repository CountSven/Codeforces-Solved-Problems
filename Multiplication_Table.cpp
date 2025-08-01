#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n, x;
	cin >> n >> x;

	int cnt = 0;

	for ( int i = 1; i <= n; i++ ) {
		if ( x % i == 0 && ( i * n ) >= x ) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}