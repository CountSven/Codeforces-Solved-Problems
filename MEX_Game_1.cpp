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
		vector<int> freq( n+5, 0 );

		for ( int i = 0; i < n; i++ ) {
			int x;
			cin >> x;
			freq[x]++;
		}

		int i = 0;

		while ( freq[i] >= 2 ) i++;
		if ( freq[i] == 1 ) i++;
		while ( freq[i] >= 2 ) i++;

		cout << i << "\n";
	} 

	return 0;
}