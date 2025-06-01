#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string s1, s2;
	cin >> s1;
	cin >> s2;

	for ( int i = 0; i < s1.size(); i++ ){
		if ( ( s1[i] == '0' && s2[i] == '1' ) || ( s1[i] == '1' && s2[i] == '0' ) ) cout << 1;
		else cout << 0;
	}

	cout << "\n";

	return 0;
}