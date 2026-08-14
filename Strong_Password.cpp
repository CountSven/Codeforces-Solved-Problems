#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s, l, r;
	int m;
	cin >> s >> m >> l >> r;

	int n = s.size(), cur = 0;

	for ( int i = 0; i < m; i++ ) {
		int st = l[i] - '0';
		int en = r[i] - '0';
		vector<int> first( 10, -1 );
		for ( int j = cur; j < n; j++ ) {
			if ( first[s[j] - '0'] == -1 ) first[s[j] - '0'] = j; 
		}
		for ( int j = st; j <= en; j++ ) {
			if ( first[j] == -1 ) {
				cout << "YES" << "\n";
				return;
			}
			cur = max( cur, first[j] + 1 );
		}
	}
	cout << "NO" << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) solve();

	return 0;
}