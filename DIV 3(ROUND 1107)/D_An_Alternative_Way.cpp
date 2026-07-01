//Saw this from TLE Eliminators
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
    long long n;
    cin >> n;
    vector<long long>a(n),b(n);
    for(long long i=0;i<n;i++) {
        cin >> a[i];
    }
    for(long long i=0;i<n;i++) {
        cin >> b[i];
    }
    bool ans = true;
    long long v =0;
    for(int i=0;i<n;i++){
        v+=a[i]-b[i];
        if(v>0){
            ans = false;
            break;
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}