#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<int> st;

	st.insert( n );

	while ( 1 ) {
		// cout << n << "\n";
		n++;
		while ( n % 10 == 0 ) n /= 10; 
		if ( st.find( n ) != st.end() ) break;
		else st.insert ( n );
	}

	cout << st.size() << "\n";

	return 0;
}