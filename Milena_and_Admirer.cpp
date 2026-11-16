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

		for ( int i = 0; i < n; i++ ) cin >> a[i]; 

		int last = a[n-1];
		long long cnt = 0;

		for ( int i = n-2; i >= 0; i-- ) {
			if ( a[i] <= last ) {
				last = a[i];
				continue;
			}
			int del = ( a[i] + last - 1 ) / last;
			del--;
			cnt += del;
			last = a[i] / ( del + 1 );
			// cout << i << " " << del << "\n";
		}

		cout << cnt << "\n";
	}

	return 0;
}