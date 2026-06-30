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
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.size()-1;i++){
        if(str[i]!=str[i+1]){
            count++;
        }
    }
    if(count==1){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
}