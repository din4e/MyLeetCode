#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n),sum(n,0);
    for(auto &it:a) cin>>it;
    sum[0]=a[0];
    for(int i=1;i<n;++i){
        sum[i]=sum[i-1]+a[i];
    }
    for(auto it:sum) cout<<it<<" ";cout<<"\n";
    vector<vector<int>> dp(k+1,vector<int>(n,0));
    vector<vector<int>>  m(k+1,vector<int>(n,0));
    for(int i=1;i<=k;++i){
        for(int j=0;j<n;++j){
            for(int l=0;l<j;++l){
                int tmp=dp[i-1][l]+(sum[j]-sum[l])*(sum[j]-sum[l]);
                if(tmp>dp[i][j]) {
                    dp[i][j]=tmp;
                    m[i][j]=m[i][j]==0?j-l:min(m[i][j],j-l);
                }
            }
        }
    }
    cout<<dp[k][n-1]<<' '<<m[k][n-1];
    return 0;
}