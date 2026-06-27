#include <bits/stdc++.h>
using namespace std;
void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t = 1;
    //cin >> t;
    while(t--)
        solve();

    return 0;
}
void solve() {
    long long n, t;
    cin >> n >> t;
    vector<long long> a(n + 1);
    for (long long i = 1; i <= n - 1; i++) { 
        cin >> a[i];
    }

    long long i = 1;
    while (i < t) {
        i += a[i];
        if (i > t) break;
    }

    cout << (i == t ? "YES" : "NO") << endl;
}