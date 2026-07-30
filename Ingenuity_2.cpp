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

		int x = 0, y = 0;
		vector<int> cnt_n, cnt_s, cnt_e, cnt_w;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == 'N' ) {
				y++;
				cnt_n.push_back( i );
			}
			else if ( s[i] == 'S' ) {
				y--;
				cnt_s.push_back( i );
			}
			else if ( s[i] == 'E' ) {
				x++;
				cnt_e.push_back( i );
			}
			else {
				x--;
				cnt_w.push_back( i );
			}
		}

		if ( x % 2 || y % 2 ) cout << "NO" << "\n";
		else {
			vector<char> res( n );

			int occ = 0, prtR = 0, prtH = 0;

			while ( cnt_n.size() && cnt_s.size() ) {
				if ( occ % 2 ) {
					res[cnt_n.back()] = 'R';
					res[cnt_s.back()] = 'R';
					prtR = 1;
				}
				else {
					res[cnt_n.back()] = 'H';
					res[cnt_s.back()] = 'H';
					prtH = 1;
				}
				cnt_n.pop_back();
				cnt_s.pop_back();
				occ++;
			}
			while ( cnt_n.size() ) {
				res[cnt_n.back()] = 'R';
				cnt_n.pop_back();
				res[cnt_n.back()] = 'H';
				cnt_n.pop_back();
				prtR = 1;
				prtH = 1;
			}
			while ( cnt_s.size() ) {
				res[cnt_s.back()] = 'R';
				cnt_s.pop_back();
				res[cnt_s.back()] = 'H';
				cnt_s.pop_back();
				prtR = 1;
				prtH = 1;
			}

			occ = 0;

			while ( cnt_e.size() && cnt_w.size() ) {
				if ( occ % 2 ) {
					res[cnt_e.back()] = 'H';
					res[cnt_w.back()] = 'H';
					prtH = 1;
				}
				else {
					res[cnt_e.back()] = 'R';
					res[cnt_w.back()] = 'R';
					prtR = 1;
				}
				cnt_e.pop_back();
				cnt_w.pop_back();
				occ++;
			}
			while ( cnt_e.size() ) {
				res[cnt_e.back()] = 'R';
				cnt_e.pop_back();
				res[cnt_e.back()] = 'H';
				cnt_e.pop_back();
				prtR = 1;
				prtH = 1;
			}
			while ( cnt_w.size() ) {
				res[cnt_w.back()] = 'R';
				cnt_w.pop_back();
				res[cnt_w.back()] = 'H';
				cnt_w.pop_back();
				prtR = 1;
				prtH = 1;
			}

			if ( !prtR || !prtH ) cout << "NO" << "\n";
			else {
				for ( auto u : res ) cout << u;
				cout << "\n";
			}
		}
	}

	return 0;
}