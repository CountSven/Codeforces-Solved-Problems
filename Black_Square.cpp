#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a[4];

	long long cnt = 0;

	for ( int i = 0; i < 4; i++ ) cin >> a[i];

	string s;
	cin >> s;

	for ( int i = 0; i < s.size(); i++ ) {
		if ( s[i] == '1' ) cnt += a[0];
		else if ( s[i] == '2' ) cnt += a[1];
		else if ( s[i] == '3' ) cnt += a[2];
		else cnt += a[3];
	}

	// for ( auto u : a ) cout << u << " ";
	// cout << "\n";

	cout << cnt << "\n";

	return 0;
}