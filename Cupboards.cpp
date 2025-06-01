#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	int cntLzero = 0, cntLone = 0, cntRzero = 0, cntRone = 0;

	while ( n-- ) {
		int l, r;
		cin >> l >> r;
		if ( l == 0 ) cntLzero++;
		else cntLone++;
		if ( r == 0 ) cntRzero++;
		else cntRone++;
	}

	int sec = 0;

	sec += min( cntLzero, cntLone );
	sec += min( cntRzero, cntRone );

	cout << sec << "\n";

	// cout << cntLzero << " " << cntLone << "\n";
	// cout << cntRzero << " " << cntRone << "\n";

	return 0;
}