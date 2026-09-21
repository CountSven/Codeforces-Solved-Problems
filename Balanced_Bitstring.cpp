#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	string s;
	cin >> n >> k >> s;

	for ( int i = 0; i < k; i++ ) {
		int f0 = 0, f1 = 0;
		for ( int j = i; j < n; j += k ) {
			if ( s[j] == '0' ) f0 = 1;
			else if ( s[j] == '1' ) f1 = 1;
		}
		if ( f0 && f1 ) {
			cout << "NO" << "\n";
			return;
		}
		else if ( f0 ) s[i] = '0';
		else if ( f1 ) s[i] = '1';
	}

	int c0 = 0, c1 = 0;

	for ( int i = 0; i < k; i++ ) {
		if ( s[i] == '0' ) c0++;
		else if ( s[i] == '1' ) c1++;
	}

	if ( c0 > ( k / 2 ) || c1 > ( k / 2 ) ) cout << "NO" << "\n";
	else cout << "YES" << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) solve();

	return 0;
}