#include <bits/stdc++.h>
using namespace std;
vector<vector<vector<int>>> dp(301,vector<vector<int>>(8,vector<int>(8,0))));
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;++i){
      for(int j=1;j<=m;++j){
        if(i!=j){
          dp[i][j][i]=1;
        }
    }
    for(int i=2;i<=2*m;++i){
      for(int j=1;j<=m;++j){
        if(i!=j){
          dp[i][j][i]=1;
        }
    }    
    for(int i=0;i<=n;++i){
      for(int k=1;k<=m;++k){
        for(int j=1;j<=m&&j!=k;++j){
          for(int l=1;l<=m&&l!=k;++l){
            if(j!=l&&i-k>=0){
              dp[i][k][j]=(dp[i][k][j]+dp[i-j][j][l])%1000000009;         
            }
          }
        }
      }
    }
    int sum=0;
    for(int i=1;i<=m;++i) sum=(sum+dp[n][i])%1000000009;
    cout<<sum;
    return 0;
}