#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;
	string s;
	cin >> s;

	int cntZ = 0, cntN = 0;

	for ( int i = 0; i < s.size(); i++ ){
		if ( s[i] == 'z' ) cntZ++;
		else if ( s[i] == 'n' ) cntN++;
	}

	while ( cntN-- ) cout << 1 << " ";
	while ( cntZ-- ) cout << 0 << " ";
	cout << "\n";
 
	return 0;
}