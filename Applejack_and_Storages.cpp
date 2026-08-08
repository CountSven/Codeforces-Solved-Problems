#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> freq( 1e5 + 5, 0 );

	for ( int i = 0, x; i < n; i++ ) {
		cin >> x;
		freq[x]++;
	}

	int cnt4 = 0, cnt2 = 0;

	for ( int i = 1; i <= 1e5; i++ ) {
		cnt4 += freq[i] / 4;
		cnt2 += ( freq[i] % 4 ) / 2;
	}

	int q;
	cin >> q;

	while ( q-- ) {
		char c;
		int x;
		cin >> c >> x;

		cnt4 -= freq[x] / 4;
		cnt2 -= ( freq[x] % 4 ) / 2;

		if ( c == '+' ) freq[x]++;
		else freq[x]--;

		cnt2 += ( freq[x] % 4 ) / 2;
		cnt4 += freq[x] / 4;

		// cout << cnt4 << " " << cnt2 << "\n";
		
		if ( cnt4 >= 2 ) cout << "YES" << "\n";
		else if ( cnt4 && cnt2 >= 2 ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}