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
		int a[n];

		int evCnt = 0, odCnt = 0;
		long long evSum = 0, odSum = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( ( i + 1 ) % 2 ) {
				odSum += a[i];
				odCnt++;
			}
			else {
				evSum += a[i];
				evCnt++;
			}
		}

		if ( ( evSum % evCnt == 0 ) && ( odSum % odCnt == 0 ) && ( evSum / evCnt == odSum / odCnt ) ) cout << "YES" << "\n";
		else cout << "NO" << "\n";	
	}

	return 0;
}