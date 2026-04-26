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
		string s1, s2;
		cin >> n >> s1 >> s2;

		int f = 0;

		for ( int i = 0; i+1 < n; i++ ) {
			if ( i % 2 == 0 && s2[i] == '<' && s1[i+1] == '<' ) f = 1;
			if ( i % 2 == 1 && s2[i+1] == '<' && s1[i] == '<' ) f = 1;
		}

		if ( !f ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}