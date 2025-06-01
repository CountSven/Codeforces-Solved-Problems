#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;
	n++;

	while ( 1 ){
		string s = to_string( n );

		bool isBeautiful = true;

		map<char, int> mp;

		for ( int i = 0; i < s.size(); i++ ){
			mp[s[i]]++;
		}

		for ( auto u : mp ){
			if ( u.second > 1 ) isBeautiful = false;
		}

		if ( isBeautiful ){
			cout << n << "\n";
			break;
			}
		else n++;
	}

	return 0;
}