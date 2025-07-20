#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		int a[n];

		long long sum = 0, cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			sum += a[i];
			if ( a[i] == 1 ) cnt += 2;
			else cnt++;
		}

		if ( n == 1 || sum < cnt ) cout << "NO" << "\n";
		else cout << "YES" << "\n";
	}

	return 0;
}