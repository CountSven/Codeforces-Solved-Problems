#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	
	/*int res = n;

	for ( int i = 1; i <= res; i++ ) {
		if ( i % m == 0 ) res++;
	}

	cout << res << "\n";*/

	int cnt = 0;

	while ( n != 0 ) {
		cnt++;
		n--;
		if ( cnt % m == 0 ) n++;
	}

	cout << cnt << "\n";
	
	return 0;
}