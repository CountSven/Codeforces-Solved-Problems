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

		int cont = 1, maxCont = 1, cnt = 0;

		for ( int i = 1; i < n; i++ ) {
			if ( s[i] == '.' && s[i-1] == '.' ) {
				cont++;
				maxCont = max( maxCont, cont );
			}
			else cont = 1;
		}

		if ( maxCont >= 3 ) cnt = 2;
		else {
			cnt = 0;
			for ( int i = 0; i < s.size(); i++ ) {
				if ( s[i] == '.' ) cnt++;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}