#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		vector<int> a(n), freq1(n+1), freq2(n+1);

		long long sum = 0, cur = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			sum += a[i];
		}

		int last = 0;

		for ( int i = 0; i < n; i++ ) {
			freq1[a[i]]++;
			if ( freq1[a[i]] >= 2 && a[i] > last ) last = a[i];
			a[i] = last;
			cur += a[i];
		}

		sum += cur;
		cur = 0, last = 0;

		for ( int i = 0; i < n; i++ ) {
			freq2[a[i]]++;
			if ( freq2[a[i]] >= 2 && a[i] > last ) last = a[i];
			a[i] = last;
			cur += a[i];
		}

		int i = 0;

		while ( i < n && a[i] == 0 ) i++;

		while ( i < n && i+1 < n && a[i] != a[i+1] ) i++;

		int j = n-1;

		while ( j >= 0 && j >= i ) {
			sum += cur;
			cur -= a[j--];
		}

		cout << sum << "\n";
	}

	return 0;
}