#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		char c[3][3];
		map<char, int> mp;

		for ( int i = 0; i < 3; i++ ){
			for ( int j = 0; j < 3; j++ ){
				cin >> c[i][j];
				mp[c[i][j]]++;
			}
		}

		for ( auto u : mp ){
			if ( u.second == 2 ) cout << u.first << "\n";
		}
	}

	return 0;
}