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

		int cnt = 0;

		for ( long long i = 1; i <= n; i++ ) {
			if ( n % i == 0 ) cnt++;
			else break;
		}

		cout << cnt << "\n";
	}
}