#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, k;
	cin >> n >> m >> k;
	vector<int> b(n), segs(n - 1);

	for ( int i = 0; i < n; i++ ) cin >> b[i];

	for ( int i = 0; i+1 < n; i++ ) segs[i] = b[i+1] - b[i] - 1;
	
	sort( segs.rbegin(), segs.rend() );

	int cur = b[n-1] - b[0] + 1;
	k--;	

	for ( int i = 0; i < k; i++ ) cur -= segs[i];

	cout << cur << "\n";

	return 0;
}