#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> v(n); 

	for ( int i = 0; i < n; i++ ) {
		cin >> v[i].first;
		v[i].second = i+1;
	}

	sort( v.rbegin(), v.rend() );

	// for ( auto u : v ) cout << u.first << " " << u.second << "\n";

	vector<int> idx(k), res(k);

	int sum = 0;

	for ( int i = 0; i < k; i++ ) {
		sum += v[i].first;
		idx[i] = v[i].second;
	}

	sort( idx.begin(), idx.end() );

	res[0] = idx[0];

	for ( int i = 1; i < k; i++ ) res[i] = idx[i] - idx[i-1];
	
	res[k-1] += ( n - idx[k-1] );	

	cout << sum << "\n";
	for ( int i = 0; i < k; i++ ) cout << res[i] << " ";
	cout << "\n";

	return 0;
}