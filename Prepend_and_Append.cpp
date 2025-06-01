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
		
		for ( int i = 0, j = s.size()-1; i < n; ){
			if ( ( s[i] == '1' && s[j] == '0' ) || ( s[i] == '0' && s[j] == '1' ) ){
				s.erase(s.begin());
				s.pop_back();
				i = 0;
				j = s.size()-1;
			}
			else break;
		}

		cout << s.size() << "\n";
	}

	return 0;
}