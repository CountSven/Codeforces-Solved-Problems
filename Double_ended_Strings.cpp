#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string a, b;
		cin >> a >> b;

		int res = 0;

		for ( int i = 0; i < a.size(); i++ ) {
			for ( int j = 0; j < b.size(); j++ ) {
				int cnt = 0;
				for ( int k = 0; i + k < a.size() && j + k < b.size() && a[i+k] == b[j+k]; k++ ) cnt++;
				res = max( res, cnt );
			}
		}

		cout << a.size() + b.size() - ( 2 * res ) << "\n";
	}

	return 0;
}