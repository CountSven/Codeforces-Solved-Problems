#include<bits/stdc++.h>
using namespace std;

bool isPrime( int n )
{
	for ( int i = 2; i < n; i++ ) {
		if ( n % i == 0 ) return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int alstPrime = 0;

	for ( int i = 1; i <= n; i++ ) {
		int cnt  = 0;
		for ( int j = 2; j <= i; j++ ) {
			if ( isPrime( j ) && i % j == 0 ) cnt++;
			if ( cnt > 2 ) break;
		}
		
		if ( cnt == 2 ) alstPrime++;
	}

	cout << alstPrime << "\n";

	return 0;
}