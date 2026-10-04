#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	string s, t;
	cin >> n >> m >> s >> t;

	int l[m], r[m];

	for ( int i = 0, j = 0; j < m; i++ ) {
		if ( s[i] == t[j] ) l[j++] = i;
	}

	for ( int i = n-1, j = m-1; j >= 0; i-- ) {
		if ( s[i] == t[j] ) r[j--] = i;
	}

	int mx = 0;

	for ( int i = 0; i+1 < m; i++ ) {
		mx = max( mx, r[i+1] - l[i] );
	}

	cout << mx << "\n";

	return 0;
}