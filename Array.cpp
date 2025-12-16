#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n), pos, neg, zer;

	for ( int i = 0; i < n; i++ ) {
		cin >> v[i];

		if ( v[i] > 0 ) pos.push_back( v[i] );
		else if ( v[i] < 0 ) neg.push_back( v[i] );
		else zer.push_back( v[i] );
	}

	if ( neg.size() == 1 ) {
		cout << neg.size() << " ";
		for ( auto u : neg ) cout << u << " ";
		cout << "\n";
		cout << pos.size() << " ";
		for ( auto u : pos ) cout << u << " ";
		cout << "\n";	
		cout << zer.size() << " ";
		for ( auto u : zer ) cout << u << " ";
		cout << "\n";
	}
	else {
		if ( pos.size() == 0 ) {
			pos.push_back( neg.back() );
			neg.pop_back();
			pos.push_back( neg.back() );
			neg.pop_back();
			while ( neg.size() > 1 ) {
				zer.push_back( neg.back() );
				neg.pop_back();
			}
			cout << neg.size() << " ";
			for ( auto u : neg ) cout << u << " ";
			cout << "\n";
			cout << pos.size() << " ";
			for ( auto u : pos ) cout << u << " ";
			cout << "\n";	
			cout << zer.size() << " ";
			for ( auto u : zer ) cout << u << " ";
			cout << "\n";
		}
		else {
			while ( neg.size() > 1 ) {
				zer.push_back( neg.back() );
				neg.pop_back();
			}
			cout << neg.size() << " ";
			for ( auto u : neg ) cout << u << " ";
			cout << "\n";
			cout << pos.size() << " ";
			for ( auto u : pos ) cout << u << " ";
			cout << "\n";	
			cout << zer.size() << " ";
			for ( auto u : zer ) cout << u << " ";
			cout << "\n";
		}
	}

	return 0;
}