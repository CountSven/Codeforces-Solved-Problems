#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	int a[n+1], b[n+1];

	for ( int i = 1; i <= n; i++ ) cin >> a[i];

	set<int> s;

	for ( int i = n; i >= 1; i-- ) {
		s.insert( a[i] );
		b[i] = (int)s.size();
	}

	// for ( int i = 1; i <= n; i++ ) cout << b[i] << " ";
	// cout << "\n";

	while ( m-- ) {
		int l;
		cin >> l;
		cout << b[l] << "\n";
	}

	return 0;
}