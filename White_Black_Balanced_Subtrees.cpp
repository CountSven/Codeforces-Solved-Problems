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
		vector<int> v(n), wh(n, 0), bl(n, 0);

		for ( int i = 1; i < n; i++ ) {
			cin >> v[i];
			v[i]--;
		}

		string s;
		cin >> s;

		for ( int i = n-1; i >= 1; i-- ) {
			if ( s[i] == 'W' ) wh[i]++;
			else bl[i]++;
			int par = v[i];
			wh[par] += wh[i];
			bl[par] += bl[i];
		}

		if ( s[0] == 'W' ) wh[0]++;
		else bl[0]++;

		int cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( wh[i] == bl[i] ) cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}