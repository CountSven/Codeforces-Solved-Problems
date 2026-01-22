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

		int cntZer = count( s.begin(), s.end(), '0' );

		if ( cntZer > 1 && cntZer % 2 ) cout << "ALICE" << "\n";
		else cout << "BOB" << "\n";
	}

	return 0;
}