#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> a(n), vis(150000+5, 0);

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	sort( a.begin(), a.end() );
	
	int cnt = 0;

	for ( int i = 0; i < n; i++ ) {
		if ( a[i] - 1 >= 1 && !vis[a[i] - 1] ) {
			cnt++;
			vis[a[i] - 1] = 1;
		}
		else if ( !vis[a[i]] ) {
			cnt++;
			vis[a[i]] = 1;
		}
		else if ( !vis[a[i] + 1] ) {
			cnt++;
			vis[a[i] + 1] = 1;
		}
	}

	cout << cnt << "\n";

	return 0;
}