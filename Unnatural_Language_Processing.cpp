#include<bits/stdc++.h>
using namespace std;

bool isV( char c )
{
	return( c == 'a' || c == 'e' );
}

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

		string r = "";

		for ( int i = 0; i < n; i++ ) {
			if ( i+3 < n && !isV(s[i]) && isV(s[i+1]) && !isV(s[i+2]) && isV(s[i+3]) ) {
				r += '.';
				r += s[i]; 
				r += s[i+1];
				s[i+1] = ' ';
			}
			else if ( i+3 < n && !isV(s[i]) && isV(s[i+1]) && !isV(s[i+2]) && !isV(s[i+3]) ) {
				r += '.';
				r += s[i]; 
				r += s[i+1];
				r += s[i+2];
				s[i+2] = ' ';
			}
			else if ( i+2 < n && !isV(s[i]) && isV(s[i+1]) && !isV(s[i+2]) ) {
				r += '.';
				r += s[i]; 
				r += s[i+1];
				r += s[i+2];
				s[i+2] = ' ';
			}
			else if ( i+1 < n && !isV(s[i]) && isV(s[i+1]) ) {
				r += '.';
				r += s[i]; 
				r += s[i+1];
				s[i+1] = ' ';
			} 
		}

		r.erase(r.begin());

		cout << r << "\n";
	}
	
	return 0;
}