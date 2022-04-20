#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i)
            a[i] += a[i-1];
    }
    while (m--) {
        long long x;
        cin >> x;
        auto p = lower_bound(a.begin(), a.end(), x) - a.begin();
        cout << p+1 << " " << x - (p?a[p-1]:0) << '\n';
    }
}