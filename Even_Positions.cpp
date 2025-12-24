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
		cin >> n;
		string s;
		cin >> s;

		s[0] = '(';

		int open = 0, close = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '(' ) open++;
			else if ( s[i] == ')' ) close++;
			else {
				if ( open > close ) {
					s[i] = ')';
					close++;
				}
				else {
					s[i] = '(';
					open++;
				}
			}
		}

		// cout << s << "\n";

		vector<int> op, cl;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '(' ) op.push_back( i+1 );
			else cl.push_back( i+1 );
		}

		// for ( auto u : op ) cout << u << " ";
		// cout << "\n";
		// for ( auto u : cl ) cout << u << " ";
		// cout << "\n";

		int cost = 0;

		for ( int i = 0; i < (int)op.size(); i++ ) cost += cl[i] - op[i];

		cout << cost << "\n";	
	}

	return 0;
}