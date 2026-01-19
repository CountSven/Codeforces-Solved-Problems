#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, q;
		cin >> n >> q;
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		vector<pair<int, long long>> vp;

		vp.push_back( {0, 0} );

		for ( int i = 0; i < n; i++ ) {
			if ( v[i] > vp[(int)vp.size()-1].first ) vp.push_back( {v[i], vp[(int)vp.size()-1].second + v[i] } );
			else {
				int idx = vp[(int)vp.size()-1].first;
				long long cur = vp[(int)vp.size()-1].second + v[i];
				vp.pop_back();
				vp.push_back( {idx, cur } );
			}
		}

        // for ( auto u : vp ) cout << u.first << " " << u.second << "\n";
        
        vector<int> st;
		vector<long long> tot;
		
		for ( int i = 0; i < (int)vp.size(); i++ ) {
		    st.push_back( vp[i].first );
		    tot.push_back( vp[i].second );
		}
		
		// for ( auto u :  st) cout << u << " ";
	    // cout << "\n";
	    // for ( auto u : tot ) cout << u << " ";
	    // cout << "\n";
	    
		while ( q-- ) {
			int k;
			cin >> k;
			
			int idx = upper_bound( st.begin(), st.end(), k ) - st.begin();
			
			cout << tot[idx-1] << " ";
		}
		cout << "\n";
	}

	return 0;
}