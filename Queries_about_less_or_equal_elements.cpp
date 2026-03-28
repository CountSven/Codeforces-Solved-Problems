#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	int a[n], b[m];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	sort( a, a+n );
	
	for ( int i = 0; i < m; i++ ) {
		cin >> b[i];
		int cur = upper_bound( a, a+n, b[i] ) - a;
		cout << cur << " ";
	}	
	cout << "\n";

	return 0;
}