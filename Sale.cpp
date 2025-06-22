#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	vector<int> v(n);

	for ( int i = 0; i < n; i++ ) cin >> v[i];

	sort( v.begin(), v.end() );

	long long sum = 0, cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		if ( v[i] < 0 ) {
			sum += abs( v[i] );
			cnt++;
		}
		if ( cnt == m ) break;
	}

	cout << sum << "\n";

	return 0;
}