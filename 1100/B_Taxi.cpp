#include <bits/stdc++.h>
using namespace std;
void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    while(t--)
        solve();
    return 0;
}

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int taxiCount = 0;
    int i = 0, j = n - 1;

    while (i <= j) {
        if (a[i] + a[j] > 4) {
            taxiCount++;
            j--;
        } else if (a[i] + a[j] == 4) {
            // Perfect pair
            taxiCount++;
            i++; j--;
        } else {
            int remaining = 4 - a[j];
            j--;
            taxiCount++;
            while (i <= j && remaining >= a[i]) {
                remaining -= a[i];
                i++;
            }
        }
    }

    cout << taxiCount << endl;
}