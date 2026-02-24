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

 		map<int, int> mp;

 		for ( int i = 0; i < n; i++ ) {
 			cin >> a[i];
 			mp[a[i]]++;
 		}

 		long long cnt = 0, cur = 0;

 		for ( auto [x, y] : mp ) {
 			if ( y >= 3 ) cnt += ( 1LL * y * ( y - 1 ) * ( y - 2 ) ) / 6;
 			if ( y >= 2 ) cnt += ( ( 1LL * y * ( y - 1 ) ) / 2 ) * cur;
 			cur += y;
 		}

 		cout << cnt << "\n";
 	}

	return 0;
}