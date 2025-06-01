#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string s;
	cin >> s;

	int cntU = 0, cntL = 0;

	for ( int i = 0; i < s.size(); i++ ){
		if ( islower(s[i]) ) cntL++;
		else cntU++;
	}

	if ( cntL >= cntU ){
		for ( int i = 0; i < s.size(); i++ ) s[i] = tolower( s[i] );
	}
	else{
		for ( int i = 0; i < s.size(); i++ ) s[i] = toupper ( s[i] );
	}

	cout << s << "\n";

	return 0;
}