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
		string s;
		cin >> s;
		s = '#' + s;

		vector<int> v(n+1);

		for ( int i = 1; i <= n; i++ ) v[i] = INT_MAX;

		for ( int i = 1; i <= n; i++ ) {
			for ( int j = i; j <= n; j += i ) {
				if ( s[j] == '1' ) break;
				else v[j] = min( v[j], i );
			}
		}

		long long res = 0;

		for ( int i = 1; i <= n; i++ ) {
			if ( s[i] == '0' ) res += v[i];
		}

		cout << res << "\n";
	}

	return 0;
}