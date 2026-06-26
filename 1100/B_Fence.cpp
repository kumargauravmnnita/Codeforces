#include <bits/stdc++.h>
#define ll long long
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
    long long n, k;
    cin >> n >>k;
    vector<long long>a(n);
    for(long long i=0;i<n;i++) {
        cin >> a[i];
    }
    int i =0,j=i+k-1;
    ll sum=0;
    for(int m = 0;m<=j;m++){
        sum+=a[m];
    }
    ll mini = sum;
    ll minIndex=0;
    while(j<n-1){
        sum-=a[i];
        i++;
        j++;
        sum+=a[j];
        if(sum<mini){
            mini=sum;
            minIndex=i;
        }
    }
    cout<<minIndex + 1<<endl;
}