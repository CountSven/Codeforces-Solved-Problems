#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int w, h;
        cin >> w >> h;
        int64_t ans = 0;
        for (int i = 0; i < 4; ++i) {
            int k;
            cin >> k;
            vector<int> a(k);
            for (auto& x : a) cin >> x;
            int height = (i < 2 ? h : w);
            ans = max(ans, int64_t(a.back() - a.front()) * height);
        }
        cout << ans << '\n';
    }
}