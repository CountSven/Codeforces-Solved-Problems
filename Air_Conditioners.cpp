#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		vector<int> a(k), t(k), res(n, 2e9); 

		for ( int i = 0; i < k; i++ ) cin >> a[i];
		for ( int i = 0; i < k; i++ ) cin >> t[i];

		vector<pair<int, int>> v(k);
		
		for ( int i = 0; i < k; i++ ) {
			a[i]--;
			res[a[i]] = t[i];
			v[i] = { t[i], a[i] };
		}
	
		sort( v.begin(), v.end() );
	
		for ( auto [val, idx] : v ) {
			int tmp = val+1, cur = idx+1;
			while ( cur < n && res[cur] > tmp ) {
				res[cur] = tmp;
				cur++;
				tmp++;
			}
			tmp = val+1, cur = idx-1;
			while ( cur >= 0 && res[cur] > tmp ) {
				res[cur] = tmp;
				cur--;
				tmp++;
			}
		}

		for ( int i = 0; i < n; i++ ) cout << res[i] << " \n"[ i + 1 == n ];
	} 

	return 0;
}