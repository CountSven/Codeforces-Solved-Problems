#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, cntE = 0, cntO = 0, idxE = 0, idxO = 0;
	cin >> n;
	int a[n];

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		
		if ( a[i] % 2 ) {
			cntO++;
			idxO = i+1;
		}
		else {
			cntE++;
			idxE = i+1;
		}
	}

	if ( cntO == 1 ) cout << idxO << "\n";
	else cout << idxE << "\n";

	return 0;
}