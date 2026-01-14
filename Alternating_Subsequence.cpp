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
		long long a[n];

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		long long sum = 0, cur = a[0];
		
		for ( int i = 0; i < n; i++ ) {
			if ( ( cur > 0 && a[i] > 0 ) || ( cur < 0 && a[i] < 0 ) ) cur = max( cur, a[i] );
			else {
				sum += cur;
				cur = a[i];
			}
		}

		sum += cur;

		cout << sum << "\n";
	}

	return 0;
}