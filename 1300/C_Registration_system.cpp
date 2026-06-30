#include <bits/stdc++.h>
using namespace std;
void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t = 1;
    // cin >> t;
    while(t--)
        solve();

    return 0;
}

void solve() {
    long long n, m, i, j, k, count = 0, ans = 0, maxi = LLONG_MIN, sum = 0;
    bool pos = false;
    cin >> n;
    vector<string>a(n);
    for(long long i=0;i<n;i++) {
        cin >> a[i];
    }
    unordered_map<string,int>mpp;
    for(int i=0;i<n;i++){
        if(mpp.find(a[i])==mpp.end()){
            cout<<"OK"<<endl;
            mpp[a[i]]=1;
        }
        else{
            string str = a[i]+to_string(mpp[a[i]]);
            cout<<str<<endl;
            mpp[a[i]]++;
            mpp[str]+=1;
        }
    }
}