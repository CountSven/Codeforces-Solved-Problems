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
		int a[n];

		long long sum = 0;

		for ( int i = 0; i < n; i++ ){
			cin >> a[i];
			sum += a[i];
		}

		double root = sqrt(sum);
		int rOOt = sqrt(sum);


		if ( root == rOOt ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}