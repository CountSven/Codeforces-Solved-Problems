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
		string s;
		cin >> s;

		stack<char> st;

		int cntZ = 0, idx1 = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '1' ) {
				idx1 = i;
				break;
			}
		}

		for ( int i = n-1; i >= 0; i-- ) {
			if ( s[i] == '1' ) {
				if ( !cntZ ) st.push( s[i] );
				else if ( i == idx1 ) {
					while ( cntZ > 1 && st.top() == '0' ) {
						st.pop();
						cntZ--;
					}
				}
			}
			else {
				st.push( s[i] );
				cntZ++;
			}
		}

		while ( !st.empty() ) {
			cout << st.top();
			st.pop();
		}
		cout << "\n";
	}

	return 0;
}