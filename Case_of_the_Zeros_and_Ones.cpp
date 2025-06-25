#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	string s;
	cin >> s;

	int cntZr = 0, cntOne = 0;

	for ( int i = 0; i < s.size(); i++ ) {
		if ( s[i] == '0' ) cntZr++;
		else cntOne++;
	}

	cout << abs( cntZr - cntOne ) << "\n";

	return 0;
}