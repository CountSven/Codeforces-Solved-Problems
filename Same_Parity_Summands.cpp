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

		if ( n < k ) cout << "NO" << "\n";
		else {
			if ( n % k == 0 ) {
				cout << "YES" << "\n";
				int val = n / k;
				while ( k-- ) cout << val << " ";
				cout << "\n";
			}
			else {
				if ( n % 2 && k % 2 == 0 ) cout << "NO" << "\n";
				else {
					if ( k <= ( n / 2 ) || ( n % 2 == k % 2 ) ) {
						cout << "YES" << "\n";

						if ( k <= ( n / 2 ) && n % 2 == 0 ) {
							vector<int> v;

							int sum = 0;

							while ( k-- ) {
								v.push_back( 2 );
								sum += 2;
							}

							v.pop_back();

							sum -= 2;

							v.push_back( n - sum );

							for ( auto u : v ) cout << u << " ";
							cout << "\n";
						}
						else {
							vector<int> v;

							int sum = 0;

							while ( k-- ) {
								v.push_back( 1 );
								sum += 1;
							}

							v.pop_back();

							sum -= 1;

							v.push_back( n - sum );

							for ( auto u : v ) cout << u << " ";
							cout << "\n";
						}
					}
					else cout << "NO" << "\n";
				}
			}
		}
	}

	return 0;
}