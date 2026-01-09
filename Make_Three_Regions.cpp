#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		string a, b;
		cin >> a >> b;

		int cnt = 0;

		for ( int i = 1; i+1 < n; i++ ) {
			if ( a[i] == '.' && b[i] == '.' && a[i-1] != 'x' && a[i+1] != 'x'  && b[i-1] == 'x' && b[i+1] == 'x' ) cnt++;
			else if ( b[i] == '.' && a[i] == '.' && b[i-1] != 'x' && b[i+1] != 'x' && a[i-1] == 'x' && a[i+1] == 'x' ) cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}