#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		string s;
		cin >> n >> k >> s;

		int f = -1, cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '1' ) {
				f = i;
				break;
			}
		}

		if ( f == -1 || f >= ( k + 1 ) ) {
			s[0] = '1';
			cnt++;
		}

		f = n;

		for ( int i = n-1; i >= 0; i-- ) {
			if ( s[i] == '1' ) {
				f = i;
				break;
			}
		}

		if ( ( n - 1 - f ) >= ( k + 1 ) ) {
			s[n-1] = '1';
			cnt++;
		}

		vector<int> pos;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '1' ) pos.push_back( i );
		}

		for ( int i = 1; i < (int)pos.size(); i++ ) {
			int cur = pos[i] - pos[i-1] + 1;
			int gap = ( cur + ( k + 1 ) - 1 ) / ( k + 1 );
			cnt += max( 0, gap - 2 );
		}

		cout << cnt << "\n";
	}

	return 0;
}