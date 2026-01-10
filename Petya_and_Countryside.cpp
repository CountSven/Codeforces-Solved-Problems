#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n+1];

	for ( int i = 1; i <= n; i++ ) cin >> a[i];

	int res = 1;
	
	for ( int i = 1; i <= n; i++ ) {
		int cur = 1, idx = i-1;

		while ( idx >= 1 ) {
			if ( a[idx] <= a[idx+1] ) {
				cur++;
				idx--;
			}
			else break;
		}

		idx = i+1;

		while ( idx <= n ) {
			if ( a[idx] <= a[idx-1] ) {
				cur++;
				idx++;
			}
			else break;
		}

		res = max( res, cur );
	}	

	cout << res << "\n";

	return 0;
}