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
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drinkinml = (k*l)/nl;
    int limes = (c*d);
    int salt = p/np;
    cout<<(min({drinkinml,limes,salt}))/n;
}