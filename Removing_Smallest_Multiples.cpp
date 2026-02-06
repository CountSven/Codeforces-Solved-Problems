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
		
		vector<int> v( n + 1, 0 ), need( n + 1, 0 );

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '1' ) v[i+1] = 1;
		}

		for ( int i = n; i >= 1; i-- ) {
			for ( int j = i; j <= n; j += i ) {
				if ( !v[j] ) need[j] = i;
				else break;
			}
		}

		long long res = 0;

		for ( int i = 1; i <= n; i++ ) {
			if ( !v[i] ) res += need[i];
		}

		cout << res << "\n";
	}

	return 0;
}