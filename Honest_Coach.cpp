#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		int n;
		cin >> n;
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		sort ( v.begin(), v.end() );

		int mn = 10000;

		for ( int i = 1; i < n; i++ ){
			if ( abs ( v[i] - v[i-1] ) < mn ) mn = abs ( v[i] - v[i-1] );
		}

		cout << mn << "\n";
	}
}