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
    long long n,k;
    cin>>n>>k;
    long long low = 1, high = n * k;
    long long ans = 0;
    while(low<=high){
        long long mid = low + (high-low)/2;
        if(mid - (mid/n)>=k){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }
    cout<<ans<<endl;
}