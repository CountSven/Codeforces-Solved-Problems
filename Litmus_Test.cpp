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
		string str;
		cin >> n >> str;

		int a = 0, b = 0, s = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( str[i] == 'A' ) a++;
			else if ( str[i] == 'B' ) b++;
			else s++;
		}

		if ( a && !b && !s ) cout << n << "\n";
		else if ( !a && b && !s ) cout << n << "\n";
		else if ( a && b && !s ) cout << 1 << "\n";
		else if ( a && b && s ) cout << 1 << "\n";
		else if ( !a && b && s ) cout << b << "\n";
		else if ( a && !b && s ) cout << a << "\n";
		else if ( !a && !b && s ) cout << 2 << "\n";
	}

	return 0;
}