#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n+1];

	map<int, int> mpF, mpS;

	for ( int i = 1; i <= n; i++ ) {
		cin >> a[i];
		mpF[a[i]] = i;
	}

	int occ = 1;
	for ( int i = n; i >= 1; i-- ) mpS[a[i]] = occ++;

	// for ( auto u : mpF ) cout << u.first << " " << u.second << "\n";
	// cout << "\n";
	// for ( auto u : mpS ) cout << u.first << " " << u.second << "\n";
	// cout << "\n";

	int m;
	cin >> m;
	int b[m];

	long long first = 0, second = 0;

	for ( int i = 0; i < m; i++ ) {
		cin >> b[i];

		first += mpF[b[i]];
		second += mpS[b[i]];
	}

	cout << first << " " << second << "\n";

	return 0;
}