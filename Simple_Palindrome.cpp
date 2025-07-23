#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int x;
        cin >> x;

        string s = "aeiou";
        string ans = "";

        for ( int i = 0; i < x; i++ ) ans += s[i%5];

        sort( ans.begin(), ans.end() );

        cout << ans << endl;
	}

	return 0;
}