#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		string s;
		cin >> s;

		char c = s[0];
		int n = s[1] - '0';

		for ( int i = 1; i <= 8; i++ ){
			if ( i != n ) cout << c << i << "\n";
		}

		for ( char i = 'a'; i <= 'h'; i++ ){
			if ( i != c ) cout << i << n << "\n";
		}
	}

	return 0;
}