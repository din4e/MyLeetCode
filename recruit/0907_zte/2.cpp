#include <bits/stdc++.h>
using namespace std;
int n,m;
int t;
int main(){
    cin>>t;
    vector<int>  a(1002);
    vector<int> dp(1002,0);
    vector<int> db(1002);
    while(t--){
        cin>>n;
        for(int i=1;i<=n;++i) cin>>a[i];
        a[0]=INT_MAX;a[n]=INT_MAX;
        for(int i=1;i<=n;++i) 
            dp[i]=a[i-1]<a[i]?dp[i-1]+1:1;
        for(int i=n;i>=0;--i)
            db[i]=a[i]<a[i+1]?db[i+1]+1:1;
        int res=1;
        for(int i=1;i<=n;++i){
            res=max(res,dp[i-1]+1);
            res=max(res,db[i+1]+1);
            if(a[i+1]-a[i-1]>=2)
                res=max(res,dp[i-1]+db[i+1]+1);
        }
        cout<<n-res<<"\n";
    }
}