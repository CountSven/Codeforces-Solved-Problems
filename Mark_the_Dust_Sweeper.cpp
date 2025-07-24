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

		int lIdx = -1;

		for ( int i = 0; i < n; i++ ) {
			if ( a[i] != 0 ) {
				lIdx = i;
				break;
			}
			
		}

		long long cnt = 0;

		if ( lIdx != -1 ) {
			for ( int i = lIdx; i < n-1; i++ ) {
				if ( a[i] == 0 ) cnt++;
				else cnt += a[i];
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}