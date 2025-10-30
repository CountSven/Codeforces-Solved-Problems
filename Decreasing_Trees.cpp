#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		long long n;
		cin >> n;
		
		long long fact = 1;

		for ( int i = 1; i < n; i++ ) fact *= i;

		cout << fact << "\n";
	}

	return 0;
}