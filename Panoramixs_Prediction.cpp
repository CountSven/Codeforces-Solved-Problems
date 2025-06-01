#include<bits/stdc++.h>
using namespace std;

bool isPrime ( int n )
{
	for ( int i = 2; i < n; i++ ){
		if ( n % i == 0 ) return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int x, y;
	cin >> x >> y;

	int cnt = 0;

	bool isPan = false;

	for ( int i = x+1; i <= y; i++ ){
		if ( isPrime( i ) ){
			cnt++;
			if ( i == y && cnt == 1){
				isPan = true;
				break;
			}
		}
	}

	if ( isPan && cnt == 1 ) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}