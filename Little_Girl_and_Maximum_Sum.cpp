#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, q;
	cin >> n >> q;

	vector<long long> a(n), freq(n+2, 0), v;

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	while ( q-- ) {
		int l, r;
		cin >> l >> r;
		freq[l]++;
		freq[r+1]--;
	}

	for ( int i = 1; i <= n; i++ ) {
		freq[i] += freq[i-1];
		v.push_back( freq[i] );
	}

	sort( v.rbegin(), v.rend() );
	sort( a.rbegin(), a.rend() );

	long long res = 0;

	for ( int i = 0; i < n; i++ ) res += ( 1LL * v[i] * a[i] );

	cout << res << "\n";	

	return 0;
}