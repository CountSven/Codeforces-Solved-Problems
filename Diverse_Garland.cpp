#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	int cnt = 0;

	for ( int i = 0; i+2 < n; i++ ) {
		if ( s[i] == s[i+1] && s[i] == s[i+2] ) {
			if ( s[i] == 'R' ) s[i+1] = 'G';
			else if ( s[i] == 'G' ) s[i+1] = 'B';
			else s[i+1] = 'R';
			cnt++;
		}
	}

	for ( int i = 0; i+1 < n; i++ ) {
		if ( s[i] == s[i+1] ) {
			if ( s[i] == 'R' ) {
				if ( i+2 < n ) {
					if ( s[i+2] == 'G' ) s[i+1] = 'B'; 
					else if ( s[i+2] == 'B' ) s[i+1] = 'G'; 
				}
				else s[i+1] = 'G';
			}
			else if ( s[i] == 'G' ) {
				if ( i+2 < n ) {
					if ( s[i+2] == 'R' ) s[i+1] = 'B'; 
					else if ( s[i+2] == 'B' ) s[i+1] = 'R'; 
				}
				else s[i+1] = 'B';
			}
			else {
				if ( i+2 < n ) {
					if ( s[i+2] == 'R' ) s[i+1] = 'G'; 
					else if ( s[i+2] == 'G' ) s[i+1] = 'R'; 
				}
				else s[i+1] = 'R';
			}
			cnt++;
		}
	}

	cout << cnt << "\n";
	cout << s << "\n";

	return 0;
}