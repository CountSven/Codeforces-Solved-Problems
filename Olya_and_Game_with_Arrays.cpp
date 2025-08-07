#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t; cin >> t;
  while (t--) {
 
    int n; cin >> n;
 
    vector<ll> a, b;
 
    for (int i = 0; i < n; i++) {
      int m; cin >> m;
      vector<int> c(m);
      for (int &i : c) {
        cin >> i;
      }
      sort(c.begin(), c.end());
      a.push_back(c[1]);
      b.push_back(c[0]);
    }
 
    sort(a.begin(), a.end());
 
    a[0] = min(a[0], *min_element(b.begin(), b.end()));
 
    ll ans = accumulate(a.begin(), a.end(), 0ll);
 
    cout << ans << "\n";
 
  }
  
}