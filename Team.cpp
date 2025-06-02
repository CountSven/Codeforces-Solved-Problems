#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	int cnt1 = 0;
	
	for ( int i = 0; i < n; i++ ) {
		int a[3];
		int cnt = 0;

		for ( int j = 0; j < 3; j++ ) {
			cin >> a[j];
			if ( a[j] == 1 ) cnt++;
		}

		if ( cnt >= 2 ) cnt1++;
	}

	cout << cnt1 << "\n";

	return 0;
}