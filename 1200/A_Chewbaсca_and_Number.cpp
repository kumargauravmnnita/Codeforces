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
    long long x;
    cin >> x;
    string str = to_string(x);
    for(int i=0; i<str.size();i++){
        if(i==0 && str[i]=='9') continue;
        else if(i==0 && str[i]>='5'){
            str[i]='9'-str[i]+'0';
        }
        else{
            if(str[i]>='5'){
                str[i]='9'-str[i]+'0';
            }
        }
    }
    long long result = stoll(str);
    cout<<result<<endl;
}