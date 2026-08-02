#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> pref(n, 1), suf(n, 1);

    for (int i = 2; i < n; i++) {
        pref[i] = pref[i - 1];
        if (__gcd(a[i - 2], a[i - 1]) > __gcd(a[i - 1], a[i])) {
            pref[i] = 0;
        }
    }
    for (int i = n - 3; i >= 0; i--) {
        suf[i] = suf[i + 1];
        if (__gcd(a[i], a[i + 1]) > __gcd(a[i + 1], a[i + 2])) {
            suf[i] = 0;
        }
    }


    for (int i = 0; i < n; i++) {
        vector<int> v;
        for (int j = i - 2; j <= i + 2; j++) {
            if (i != j && j >= 0 && j < n) {
                v.push_back(a[j]);
            }
        }
        int res = (i == 0 || pref[i - 1]) & (i + 1 == n || suf[i + 1]);
        for (int j = 2; j < v.size(); j++) {
            if (__gcd(v[j - 2], v[j - 1]) > __gcd(v[j - 1], v[j])) {
                res = 0;
            }
        }
        if (res) {
            cout << "YES" << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
