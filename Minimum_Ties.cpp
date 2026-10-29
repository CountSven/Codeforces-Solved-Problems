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

		int mx;

		if ( n % 2 ) mx = ( n / 2 ) * 3;
		else mx = 1 + ( ( n - 1 ) / 2 ) * 3;

		// cout << mx << "\n";

		vector<int> cur(n+1, 0);

		for ( int i = 1; i+1 <= n; i++ ) {
			for ( int j = i+1; j <= n; j++ ) {
				if ( cur[i] + 3 <= mx ) {
					cout << 1 << " ";
					cur[i] += 3;
				}
				else if ( cur[i] + 1 <= mx ) {
					cout << 0 << " ";
					cur[i]++;
					cur[j]++;
				}
				else {
					cout << -1 << " ";
					cur[j] += 3;
				}
			}
		}
		cout << "\n";

		// for ( int i = 1; i <= n; i++ ) cout << cur[i] << " \n"[i == n];
	} 

	return 0;
}