#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int t = -1, p = -1, occT = 0;

	vector<int> idx;

	for ( int i = 0; i < s.size(); i++ ) {
		if ( s[i] == 'T' && !occT ) {
			t = i;
			occT = 1;
		}
		else if ( s[i] == 'A' ) idx.push_back( i );
		else if ( s[i] == 'P' ) p = i;
	}

	if ( t == -1 || p == -1 || idx.size() == 0 ) cout << 'N' << "\n";
	else {
		int fl = 0;

		for ( int i = 0; i < idx.size(); i++ ) {
			if ( idx[i] > t && idx[i] < p ) {
				fl = 1;
				break;
			}
		}

		if ( fl ) cout << 'S' << "\n";
		else cout << 'N' << "\n";
	}

	return 0;
}