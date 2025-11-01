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
		string s;
		cin >> n >> s;

		string cur = "";

		if ( n == 1 ) cout << "YES" << "\n";
		else if ( n == 2 ) {
			string cur = s.substr( 0, 2 );

			int val = stoi( cur );

			if ( val % 2 ) cout << "NO" << "\n";
			else cout << "YES" << "\n";
		}
		else if ( n == 3 ) {
			string cur1 = s.substr( 0, 2 );
			string cur2 = s.substr( 1, 2 );
			string cur3 = s.substr( 0, 3 );

			int val1 = stoi( cur1 );
			int val2 = stoi( cur2 );
			int val3 = stoi( cur3 );

			if ( val1 % 2 || val2 % 2 ) cout << "NO" << "\n";
			else if ( val3 % 3 ) cout << "NO" << "\n";
			else cout << "YES" << "\n"; 
		}
		else if ( n == 4 ) {
			string cur1 = s.substr( 0, 2 );
			string cur2 = s.substr( 1, 2 );
			string cur3 = s.substr( 2, 2 );
			string cur4 = s.substr( 0, 3 );
			string cur5 = s.substr( 1, 3 );
			string cur6 = s.substr( 0, 4 );

			int val1 = stoi( cur1 );
			int val2 = stoi( cur2 );
			int val3 = stoi( cur3 );
			int val4 = stoi( cur4 );
			int val5 = stoi( cur5 );
			int val6 = stoi( cur6 );

			// cout << val1 << " " << val2 << " " << val3 << " " << val4 << " " << val5 << " " << val6 << "\n";

			if ( val1 % 2 || val2 % 2 || val3 % 2 ) cout << "NO" << "\n";
			else if ( val4 % 3 || val5 % 3 ) cout << "NO" << "\n";
			else if ( val6 % 4 ) cout << "NO" << "\n";
			else cout << "YES" << "\n"; 
		}
		else cout << "NO" << "\n";
	}

	return 0;
}