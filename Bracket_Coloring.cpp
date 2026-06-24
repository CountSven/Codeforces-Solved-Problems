#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, bal = 0;
		string s;
		cin >> n >> s;

		vector<int> res(n);

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '(' ) {
				if ( bal >= 0 ) res[i] = 1;
				else res[i] = 2;
				bal++;
			}
			else {
				if ( bal > 0 ) res[i] = 1;
				else res[i] = 2;
				bal--; 
			}
		}

		if ( bal != 0 ) cout << -1 << "\n";
		else {
			if ( *min_element( res.begin(), res.end() ) == 2 ) {
				for ( int i = 0; i < n; i++ ) res[i] -= 1;
			}

			cout << *max_element( res.begin(), res.end() ) << "\n";
			for ( int i = 0; i < n; i++ ) cout << res[i] << " ";
			cout << "\n";
		}
	}

	return 0;
}