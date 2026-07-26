#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> par( n + 1 ), c( n + 1 ), bad( n + 1, 1 );

	for ( int i = 1; i <= n; i++ ) cin >> par[i] >> c[i];

	for ( int i = 1; i <= n; i++ ) {
		if ( !c[i] ) {
			bad[i] = 0;
			if ( par[i] != -1 ) bad[par[i]] = 0;
		}
	}

	int f = 1;

	for ( int i = 1; i <= n; i++ ) {
		if ( bad[i] ) {
			f = 0;
			cout << i << " ";
		}
	}

	if ( f ) cout << -1 << "\n";
	else cout << "\n";

	return 0;
}