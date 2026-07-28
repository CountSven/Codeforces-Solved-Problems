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
		string s;
		cin >> n >> s;

		int res = 1e9;

		for ( int i = 0; i+1 < n; i++ ) {
			int j = 0, cur = -1, val;

			while ( j < n ) {
				if ( j == i ) {
					string r = "";
					r += s[j];
					r += s[j+1];
					val = stoi( r );
					j += 2;
				}
				else {
					val = s[j] - '0';
					j++;
				}
				if ( cur == -1 ) cur = val;
				else cur = min( cur * val, cur + val );
			}

			res = min( res, cur );
		}

		cout << res << "\n";
	}

	return 0;
}