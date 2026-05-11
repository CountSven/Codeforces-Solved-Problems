#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string s;
		cin >> s;
		
		long long res = s.size(), val = 0, cur = 0;

		for ( int i = 0; i < s.size(); i++ ) {
			if ( s[i] == '-' ) cur--;
			else cur++;
			
			if ( val + cur < 0 ) {
				res += i + 1;
				val++;
			}
		}

		cout << res << "\n";
	}

	return 0;
}