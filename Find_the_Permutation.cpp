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

		vector<int> pos( n+1, 0 );

		for ( int i = 1; i <= n; i++ ) {
			string s;
			cin >> s;
			s = '#' + s;

			int cnt = 0;

			for ( int j = 1; j <= n; j++ ) {
				if ( s[j] == '1' && i < j ) cnt++;
			}

			for ( int j = n; j >= 1; j-- ) {
				if ( pos[j] ) continue;
				if ( !cnt ) {
					pos[j] = i;
					break;
				}
				cnt--;
			}
		}

		for ( int i = 1; i <= n; i++ ) cout << pos[i] << " ";
		cout << "\n";
	}

	return 0;
}