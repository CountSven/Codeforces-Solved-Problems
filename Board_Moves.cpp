#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n;
		cin >> n;

		long long cnt = 0;

		for ( long long i = 1; i <= n/2; i++ ) cnt += ( 8 * ( i * i ) );

		cout << cnt << "\n";
	}

	return 0;
}