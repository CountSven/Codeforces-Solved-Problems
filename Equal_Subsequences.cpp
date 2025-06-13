#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;

		string s;
		
		int r = n - k;

		while ( r-- ) s += '0';
		while ( k-- ) s += '1';
		
		cout << s << "\n";
	}

	return 0;
}