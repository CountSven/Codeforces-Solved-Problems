#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		int n;
		cin >> n;
		string s;
		cin >> s;

		map<char, int> mp;

		for ( int i = 0; i < s.size(); i++ ) mp[s[i]]++;

		//for ( auto u : mp ) cout << u.first << " " << u.second << "\n";

		int cnt = 0;
		int k = 1;

		for ( char i = 'A'; i <= 'Z'; i++ ){
			if ( mp[i] >= k ) cnt++;
			k++;
		}

		cout << cnt << "\n";
	}

	return 0;
}