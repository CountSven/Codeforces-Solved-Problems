#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int rng = 1e6 + ( 1e6 / 3 );

	vector<int> vec( rng+1, 0 ), pr;

	for ( int i = 1; i <= rng; i++ ) {
		for ( int j = i; j <= rng; j += i ) vec[j]++;
	}

	for ( int i = 1; i <= rng; i++ ) {
		if ( vec[i] == 2 ) pr.push_back( i );
	}

	// cout << pr.size() << "\n";

	int n;
	cin >> n;

	for ( int i = 0; i < n; i++ ) cout << pr[i] << " ";
	cout << "\n";

	return 0;
}