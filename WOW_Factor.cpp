#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	vector<pair<int, char>> v;

	int cnt = 0;
	char c = s[0];

	for ( char i : s ) {
		if ( i != c ) {
			v.push_back( { cnt, c } );
			cnt = 1;
			c = i;
		}
		else cnt++;
	}

	v.push_back( { cnt, c } );

	// for ( auto [x, y] : v ) cout << x << " " << y << "\n";

	string cur = "";

	for ( auto [x , y] : v ) {
		if ( y == 'v' ) {
			x--;
			while ( x-- ) cur += 'w';
		}
		else {
			while ( x-- ) cur += 'o';
		}
	}

	while ( cur.back() == 'o' ) cur.pop_back();
	reverse( cur.begin(), cur.end() );
	while ( cur.back() == 'o' ) cur.pop_back();
	reverse( cur.begin(), cur.end() );

	// cout << cur << "\n";

	vector<pair<int, int>> chk;

	int i = 0, cntW = 0, cntO = 0;

	while ( i < cur.size() ) {
		if ( cur[i] == 'w' ) {
			while ( i < cur.size() && cur[i++] == 'w' ) cntW++;
			chk.push_back( { cntW, cntO } );
			cntO++;
			cntW = 0;
		}
		else {
			cntO++;
			i++;
		}
	}

	// for ( auto [x, y] : chk ) cout << x << " " << y << "\n";

	long long res = 0, sumW = 0, sumWO = 0;

	for ( auto [w, o] : chk ) {
		res += ( 1LL * w * ( o * sumW - sumWO ) );
		sumW += w;
		sumWO += ( 1LL * w * o );
	}

	cout << res << "\n";

	return 0;
}