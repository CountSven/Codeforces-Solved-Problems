#include<bits/stdc++.h>
using namespace std;

string s1, s2;

int n, pos = 0, tot = 0, cnt = 0;

void dfs( int cur, int i )
{
	// cout << i << " " << cur << "\n";
	if ( i == n ) {
		tot++;
		if ( cur == pos ) cnt++;
		return;
	}

	if ( s2[i] == '+' ) dfs( cur + 1, i + 1 );
	else if ( s2[i] == '-' ) dfs( cur - 1, i + 1 );
	else {
		dfs( cur + 1, i + 1 );
		dfs( cur - 1, i + 1 );
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> s1 >> s2;

	n = (int)s1.size();

	for ( int i = 0; i < n; i++ ) {
		if ( s1[i] == '+' ) pos++;
		else pos--;
	}

	dfs( 0, 0 );

	// cout << pos << " " << tot << " " << cnt << "\n";

	double res = ( 1.0 ) * cnt / tot;

	cout << fixed << setprecision(12) << res << "\n";

	return 0;
}