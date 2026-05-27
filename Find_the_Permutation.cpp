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
		vector<int> cnt( n+1 ), pos( n+1, 0 );

		for ( int i = 1; i <= n; i++ ) {
			int cur = 0;
			for ( int j = 1; j <= n; j++ ) {
				char c;
				cin >> c;
				if ( c == '1' && i < j ) cur++;
			}
			cnt[i] = cur;
		}

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = n; j >= 1; j-- ) {
				if ( !pos[j] && !cnt[i] ) {
					pos[j] = i;
					break;
				}
				else {
					if ( !pos[j] ) cnt[i]--; 
				}
			}
		}

		for ( int i = 1; i <= n; i++ ) cout << pos[i] << " ";
		cout << "\n";
	}

	return 0;
}