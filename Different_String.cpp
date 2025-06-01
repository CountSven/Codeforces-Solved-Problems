#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		string s;
		cin >> s;

		bool isNotDiff = true;
		int n = s.size();

		for ( int i = 1; i < n; i++ ){
			if ( s[i] != s[0] ){
			    isNotDiff = false;
			    break;
			}
		}

		if ( isNotDiff || n == 1 ) cout << "NO" << "\n";
		else{
			string r;

			for ( int i = 0; i < n; i++ ){
				r = s.substr(i+1) + s.substr(0, i+1);
				if ( r != s ) break;
			}

			cout << "YES" << "\n";
			cout << r << "\n";
		}
	}

	return 0;
}