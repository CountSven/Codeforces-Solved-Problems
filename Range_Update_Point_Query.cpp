#include<bits/stdc++.h>
using namespace std;

struct lazy_sumseg {
    int N;
    vector<int> a, seg, lazy;
    lazy_sumseg() { N = 0; }
    lazy_sumseg(int n) {
        N = n; 
        int M=1;
        while(M<N){M<<=1;}
        a.resize(n);
        seg.resize(M<<1);
        lazy.resize(M<<1);
    }
 
    void maketree(int l, int r, int node) {
        if (l == r) { seg[node] = a[l]; return; }
        int mid = (l + r) >> 1;
        maketree(l, mid, node * 2);
        maketree(mid + 1, r, node * 2 + 1);
        seg[node] = seg[node * 2] + seg[node * 2 + 1];
    }
    void propagate(int l, int r, int node) {
        if (l == r) { seg[node] = seg[node] + lazy[node]; lazy[node] = 0; return; }
        seg[node] = seg[node] + lazy[node] * (r - l + 1);
        lazy[node * 2] = lazy[node*2] + lazy[node];
        lazy[node * 2 + 1] = lazy[node*2+1] + lazy[node];
        lazy[node] = 0;
    }
    void update(int l, int r, int from, int to, int inc, int node) {
        propagate(l, r, node);
        if (from <= l && r <= to) { lazy[node] = lazy[node] + inc; propagate(l, r, node); return; }
        if (from > r || to < l) { return; }
        int mid = (l + r) >> 1;
        update(l, mid, from, to, inc, node * 2);
        update(mid + 1, r, from, to, inc, node * 2 + 1);
        seg[node] = seg[node * 2] + seg[node * 2 + 1];
    }
    int query(int l, int r, int from, int to, int node) {
        propagate(l, r, node);
        if (from <= l && r <= to) { return seg[node]; }
        if (from > r || to < l) { return 0; }
        int mid = (l + r) >> 1;
        return query(l, mid, from, to, node * 2) + query(mid + 1, r, from, to, node * 2 + 1);
    }
    void maketree() { maketree(0,N-1,1); }
    void update(int from, int to, int inc) { update(0,N-1, from, to, inc, 1); }
    int query(int from, int to) { return query(0,N-1, from, to, 1); }
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, q;
		cin >> n >> q;
		vector<int> a(n); 

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		lazy_sumseg seg(n);
	
		while ( q-- ) {
			int tp, l, r, x;
			cin >> tp;

			if ( tp == 1 ) {
				cin >> l >> r;
				l--, r--;
				seg.update( l, r, 1 );
			}
			else {
				cin >> x;
				x--;
				int cur = min( 3, seg.query( x, x ) );
				int tmp = a[x];
				while ( cur-- ) {
					int nval = 0;
					while ( tmp ) {
						nval += tmp % 10;
						tmp /= 10;
					}
					tmp = nval;
				}
				cout << tmp << "\n";
			}
		}
	}

	return 0;
}