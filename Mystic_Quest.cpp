#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;

		int cnt = 0;

		int val = 1, cur = 0;

		while ( cur < n ) {
			cur = pow( val++, 2 );
			if ( cur <= n ) cnt++;
		}

		cout << cnt << "\n";
	} 

	return 0;
}