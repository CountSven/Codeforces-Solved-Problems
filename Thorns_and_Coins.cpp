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
		char c[n];

		for ( int i = 0; i < n; i++ ) cin >> c[i];

		int cnt = 0;

		for ( int i = 0; i < n; i++ ){
			if ( c[i+1] == '*' && c[i+2] == '*' ){
				if ( c[i] == '@' ) cnt++;
				break;
			}
			else if ( c[i] == '@' ) cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}