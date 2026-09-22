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

		vector<int> zero, one, res;

		int cur = 1;

		for ( char c : s ) {
			if ( c == '0' ) {
				if ( !one.size() ) {
					zero.push_back( cur );
					res.push_back( cur++ );
				}
				else {
					zero.push_back( one.back() );
					res.push_back( one.back() );
					one.pop_back();
				}
			}
			else {
				if ( !zero.size() ) {
					one.push_back( cur );
					res.push_back( cur++ );
				}
				else {
					one.push_back( zero.back() );
					res.push_back( zero.back() );
					zero.pop_back();
				}
			}
		}

		cout << cur - 1 << "\n";
		for ( auto u : res ) cout << u << " ";
		cout << "\n";
	}

	return 0;
}