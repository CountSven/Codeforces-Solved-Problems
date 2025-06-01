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

		for ( int i = 0; i < n; ){
			for ( int j = 1; j < n; ){
				if ( s[i] == s[j] ){
					cout << s[j];
					i = j+1;
					j = j+2;
				}
				else j++;
			}

			if ( i != n-1 )i++;
			else{
				cout << s[i];
				break;
			}
		}

		cout << "\n";
	}

	return 0;
}