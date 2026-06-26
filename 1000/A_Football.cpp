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
    long long n, m, i, j, k, count = 0, ans = 0,  sum = 0;
    bool pos = false;
    cin >> n;
    unordered_map<string,int>mpp;
    vector<string>a(n);
    for(long long i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
            mpp[a[i]]++;
        }
    int maxi = 0;
    string team = "";
    for(auto it:mpp){
        if(it.second>maxi){
            maxi=it.second;
            team = it.first;
        }
    }
    cout<<team<<endl;   
}