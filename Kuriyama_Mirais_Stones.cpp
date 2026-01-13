#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<long long> v(n), nonSor(n+1), sor(n+1);

	nonSor[0] = 0;
	sor[0] = 0;

	for ( int i = 0; i < n; i++ ) cin >> v[i];

	for ( int i = 0; i < n; i++ ) nonSor[i+1] = nonSor[i] + v[i];

	sort( v.begin(), v.end() );

	for ( int i = 0; i < n; i++ ) sor[i+1] = sor[i] + v[i];

	// for ( auto u : nonSor ) cout << u << " ";
	// cout << "\n";
	// for ( auto u : sor ) cout << u << " ";
	// cout << "\n";

	int m;
	cin >> m;

	while ( m-- ) {
		int tp, l, r;
		cin >> tp >> l >> r;

		if ( tp == 1 ) cout << nonSor[r] - nonSor[l-1] << "\n";
		else cout << sor[r] - sor[l-1] << "\n";
	}

	return 0;
}