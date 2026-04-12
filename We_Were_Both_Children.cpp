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
		vector<int> freq( n+1, 0 ), jumps( n+1, 0 );

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			if ( x <= n ) freq[x]++;
		}

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = i; j <= n; j += i ) {
				jumps[j] += freq[i];
			}
		}

		int mx = 0;

		for ( int i = 1; i <= n; i++ ) mx = max( mx, jumps[i] );

		cout << mx << "\n";	
	}

	return 0;
}