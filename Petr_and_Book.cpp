#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(7);

	for ( int i = 0; i < 7; i++ ) cin >> v[i];

	int sum = 0, day = 0;

	while ( sum < n ) {
		for ( int i = 0; i < 7; i++ ) {
			sum += v[i];
			if ( sum >= n ) {
				day = i + 1;
				break;
			}
		}
	}

	cout << day << "\n";

	return 0;
}