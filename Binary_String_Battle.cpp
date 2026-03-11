#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		string s;
		cin >> n >> k >> s;

		int cnt1 = count( s.begin(), s.end(), '1' );

		if ( cnt1 <= k ) {
			cout << "Alice" << "\n";
			continue;
		}

		if ( k * 2 <= n ) {
			cout << "Bob" << "\n";
			continue;
		}

		cout << "Alice" << "\n";
	}

	return 0;
}