#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	sort( a.begin(), a.end() );
	a.erase( unique( a.begin(), a.end() ), a.end() );
	
	int cur = 1, cnt = 1;

	for ( auto u : a ) {
		if ( u > cnt ) {
			cout << ( cur % 2 ? "Alice" : "Bob" ) << "\n";
			return;
		}
		else {
			cnt++;
			cur++;
		}
	}

	cout << ( cur % 2 ? "Bob" : "Alice" ) << "\n";
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