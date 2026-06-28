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

int lb(vector<int>&arr,int num){
    int low=0,high=arr.size()-1;
    int index=-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]<=num){
            index=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return index;
}
void solve() {
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
        cin>>arr[i];
   } 
   int q;
   cin>>q;
   vector<int>m(q);
   for(int i=0;i<q;i++){
        cin>>m[i];
   }
   sort(arr.begin(),arr.end());
   vector<int>output(q);
   for(int i=0;i<q;i++){
        int temp=lb(arr,m[i]);
        if(temp==-1){
            output[i]=0;
        }
        else{
            output[i]=temp+1;
        }
   }
   for(int i=0;i<q;i++){
    cout<<output[i]<<endl;
   }
   cout<<endl;
}