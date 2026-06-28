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
    long long a,b;
    cin>>a>>b;
    long long count = a;
    while(a/b!=0){
        count += a/b;
        int temp = a%b;
        a = a/b + temp;
    }
    cout<<count<<endl;
}