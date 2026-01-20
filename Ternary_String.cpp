#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string s;
		cin >> s;

		vector<int> idx1, idx2, idx3;

		for ( int i = 0; i < (int)s.size(); i++ ) {
			if ( s[i] == '1' ) idx1.push_back(i);
			else if ( s[i] == '2' ) idx2.push_back(i);
			else idx3.push_back(i);
		}

		// for ( auto u : idx1 ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : idx2 ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : idx3 ) cout << u << " ";
		// cout << "\n\n";

		if ( !(int)idx1.size() || !(int)idx2.size() || !(int)idx3.size() ) cout << 0 << "\n";
		else {
			int i = 0, j = 0, k = 0, res = INT_MAX;

			while ( i < (int)idx1.size() && j < (int)idx2.size() && k < (int)idx3.size() ) {
				// cout << i << " " << j << " " << k << "\n";
				int curMn = min( idx1[i], min( idx2[j], idx3[k] ) );
				int curMx = max( idx1[i], max( idx2[j], idx3[k] ) );
				res = min( res, curMx - curMn + 1 );

				if ( curMn == idx1[i] ) i++;
				else if ( curMn == idx2[j] ) j++;
				else k++;
			}

			cout << res << "\n";
		}
	}

	return 0;
}