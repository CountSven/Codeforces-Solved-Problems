#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string p, s;
		cin >> p >> s;

		vector<pair<int, char>> seq1, seq2;
		int cur = 1;

		for ( int i = 1; i < p.size(); i++ ) {
			if ( p[i] != p[i-1] ) {
				seq1.push_back ( { cur, p[i-1] } );
				cur = 1;
			}
			else cur++;
		}

		seq1.push_back ( { cur, p[(int)p.size()-1] } );
		cur = 1;

		for ( int i = 1; i < s.size(); i++ ) {
			if ( s[i] != s[i-1] ) {
				seq2.push_back ( { cur, s[i-1] } );
				cur = 1;
			}
			else cur++;
		}

		seq2.push_back ( { cur, s[(int)s.size()-1] } );

		// for ( auto u : seq1 ) cout << u.first << " " << u.second << "\n";
		// cout << "\n";
		// for ( auto u : seq2 ) cout << u.first << " " << u.second << "\n";
		// cout << "\n";

		if ( seq1.size() != seq2.size() ) cout << "NO" << "\n";
		else {
			int f = 0;

			for ( int i = 0; i < seq1.size(); i++ ) {
				if ( ( seq1[i].second != seq2[i].second ) || ( seq1[i].first > seq2[i].first ) || ( seq2[i].first > ( 2 * seq1[i].first ) ) ) {
					f = 1;
					break;
				}
			}

			if ( !f ) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}