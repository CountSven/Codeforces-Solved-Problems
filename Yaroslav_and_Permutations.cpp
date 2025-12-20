#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	map<int, int> mp;

	int mxOcc = 1;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		mp[a[i]]++;

		mxOcc = max( mxOcc, mp[a[i]] );
	}

	int req = ceil( (1.0) * n / 2 );

	if ( mxOcc <= req ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}