#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> sum( 200000+5, 0 );

	for ( int i = 1; i <= 200000; i++ ) {
		int val = i, cur = 0;

		while ( val ) {
			cur += ( val % 10 );
			val /= 10;
		}

		sum[i] = cur + sum[i-1];
	}

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		cout << sum[n] << "\n";
	}

	return 0;
}