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
		string s;
		cin >> n >> s;

		map<char, int> mp;

		for ( char i = 'a'; i <= 'z'; i++ ) mp[i]++;

		for ( int i = 0; i < n; i++ ) mp[s[i]]++;

		char ff = '#';

		for ( auto u : mp )	 {
			if ( u.second == 1 ) {
				ff = u.first;
				break;
			}
		}

		if ( ff != '#' ) cout << ff << "\n";
		else {
			char ss = '#';

			for ( char i = 'a'; i <= 'z'; i++ ) {
				for ( char j = 'a'; j <= 'z'; j++ ) {
					int f = 0;
					for ( int k = 0; k+1 < n; k++ ) {
						if ( s[k] == i && s[k+1] == j ) f = 1;
					}
					if ( !f ) {
						ff = i;
						ss = j;
						break;
					}
				}
				if ( ff != '#' && ss != '#' ) break;
			}

			if ( ff != '#' && ss != '#' ) cout << ff << ss << "\n";
			else {
				char tt = '#';

				for ( int i = 'a'; i <= 'z'; i++ ) {
					for ( int j = 'a'; j <= 'z'; j++ ) {
						for ( int k = 'a'; k <= 'z'; k++ ) {
							int f = 0;
							for ( int l = 0; l+2 < n; l++ ) {
								if ( s[l] == i && s[l+1] == j && s[l+2] == k ) f = 1;
							}
							if ( !f ) {
								ff = i;
								ss = j;
								tt = k;
								break;
							}
						}
						if ( ff != '#' && ss != '#' && tt != '#' ) break;
					}
					if ( ff != '#' && ss != '#' && tt != '#' ) break;
				}

				cout << ff << ss << tt << "\n";
			}
		}
	}

	return 0;
}