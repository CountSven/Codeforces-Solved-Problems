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

		map<int, int> mp1, mp2, mp3, mp4;

		while ( n-- ) {
			int x, y;
			cin >> x >> y;
			mp1[x]++;
			mp2[y]++;
			mp3[x + y]++;
			mp4[x - y]++;
		}

		long long res = 0;

		for ( auto [x, y] : mp1 ) res += 1LL * y * ( y - 1 );
		for ( auto [x, y] : mp2 ) res += 1LL * y * ( y - 1 );
		for ( auto [x, y] : mp3 ) res += 1LL * y * ( y - 1 );
		for ( auto [x, y] : mp4 ) res += 1LL * y * ( y - 1 );

		cout << res << "\n";		
	}

	return 0;
}