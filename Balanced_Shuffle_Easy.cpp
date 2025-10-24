#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int n = s.size();

	vector<pair<int, int>> v(n);

	int bal = 0;

	for ( int i = 0; i < n; i++ ) {
		v[i].first = bal;
		v[i].second = -i;

		bal += ( s[i] == '(' ? 1 : -1 );
	}

	sort( v.begin(), v.end() );

	for ( auto [ x, c ] : v ) cout << s[-c];

	return 0;
}