#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	vector<int> v(m);

	long long cnt = 0;
	int cur = 1;

	for ( int i = 0; i < m; i++ ) {
		cin >> v[i];
		if ( v[i] >= cur ) cnt += ( v[i] - cur );
		else cnt += ( ( n - cur + 1 ) + ( v[i] - 1 ) );
		cur = v[i];
		// cout << cnt << " ";
	}
	// cout << "\n";

	cout << cnt << "\n";

	return 0;
}