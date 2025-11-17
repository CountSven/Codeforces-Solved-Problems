#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int n = (int)s.size(), cnt = 0;
	int a[n+1];
	
	a[1] = 0;

	for ( int i = 1; i < n; i++ ) {
		if ( s[i] == s[i-1] ) cnt++;
		a[i+1] = cnt;
	}

	// for ( int i = 1; i <= n; i++ ) cout << a[i] << " ";
	// cout << "\n";

	int q;
	cin >> q;

	while ( q-- ) {
		int l, r;
		cin >> l >> r;
		cout << a[r] - a[l] << "\n";
	}

	return 0;
}