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
		vector<int> a(n);

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		vector<bool> vis( n*n+1, false );

		for ( int i = 0; i+1 < n; i++ ) {
			int sum = a[i];
			for ( int j = i+1; j < n; j++ ) {
				sum += a[j];
				vis[sum] = true;
			}
		}

		int cnt = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( vis[a[i]] ) cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}