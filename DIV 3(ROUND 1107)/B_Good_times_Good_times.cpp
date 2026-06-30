#include <bits/stdc++.h>
using namespace std;
void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t = 1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

void solve() {
    long long x;
    cin>>x;
    int countDigits=0;
    while(x>0){
        countDigits+=1;
        x/=10;
    }
    long long ans = 10;
    for (int i = 1; i < countDigits; i++)
        ans *= 10;
        cout << ans + 1 << '\n';
}