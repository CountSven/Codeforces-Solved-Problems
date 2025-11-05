#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, T;
    cin >> n >> T;

    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());

    vector<pair<int,int>> m;
    m.push_back(v[0]);

    for(int i=1;i<n;i++){
        if(v[i].first <= m.back().second){
            m.back().second = max(m.back().second, v[i].second);
        } else {
            m.push_back(v[i]);
        }
    }

    int mx = 0;

    mx = max(mx, m[0].first - 0);

    for(int i=1;i<m.size();i++){
        mx = max(mx, m[i].first - m[i-1].second);
    }

    mx = max(mx, T - m.back().second);

    cout << mx << "\n";
    return 0;
}
