#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b, c;
		cin >> a >> b >> c;

		string s;

		if ( b ) {
			s += '0';
			s += '1';
			b--;
		}

		int i = 0;

		while ( b-- ) {
			if ( i % 2 == 0 ) s += '0';
			else s += '1';
			i++;
			i %= 2;
		}

		if ( c ) {
			if ( !s.size() ) {
				while ( c-- ) s += '1';
				s += '1';
			}
			else {
				int f = 0;
				if ( s.back() == '0' ) {
					s.pop_back();
					f = 1;
				}
				while ( c-- ) s += '1';
				if ( f ) s += '0';
			}
		}

		if ( a ) {
			reverse( s.begin(), s.end() );
			if ( !s.size() ) s += '0';
 			while ( a-- ) s += '0';
			reverse( s.begin(), s.end() );
		}

		cout << s << "\n";
	}

	return 0;
}