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
    long long n, k;
    cin>>n>>k;
    string str;
    cin>>str;
    for(int i=0;i<n-k;i++){
        if(str[i]=='1'){
            str[i]='0';
            str[i+k] = (str[i+k] == '0') ? '1' : '0';
        }
    }
    int flag=true;
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}