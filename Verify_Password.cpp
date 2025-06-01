#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		int n;
		cin >> n;
		string s;
		cin >> s;

		string tmp = s;

		sort( tmp.begin(), tmp.end() );

		if ( tmp == s ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}