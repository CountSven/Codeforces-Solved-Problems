#include<bits/stdc++.h>
using namespace std;

string s;
int n;

int solve( int i, int j )
{
	int a[2] = { i, j };
	int cnt = 0, ptr = 0;

	for ( char c : s ) {
		int d = c - '0';
		if ( d == a[ptr] ) {
			cnt++;
			ptr++;
		}
		ptr %= 2;
	}

	if ( i != j && cnt % 2 ) cnt--; 

	// cout << i << " " << j << " -> " << cnt << "\n";
	
	return n - cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		cin >> s;
		n = s.size();

		int res = n;

		for ( int i = 0; i <= 9; i++ ) {
			for ( int j = 0; j <= 9; j++ ) {
				res = min( res, solve( i, j ) );
			}
		}

		cout << res << "\n";
	} 

	return 0;
}