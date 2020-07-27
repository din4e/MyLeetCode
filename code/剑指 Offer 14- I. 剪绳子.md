# [剑指 Offer 14- I. 剪绳子](https://leetcode-cn.com/problems/jian-sheng-zi-lcof/)

```cpp
class Solution {
public:
    int cuttingRope(int n) {
        int m=n,ans=1;
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<m;++i) dp[i][1]=i,dp[i][i]=1;
        for(int j=1;j<=m;++j){
            for(int i=1;i<=n;++i){
                for(int k=1;k<i;++k)
                    dp[i][j]=max(dp[i][j],dp[k][j-1]*(i-k));
                ans=max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};
```
