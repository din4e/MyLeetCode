# [剑指 Offer 13. 机器人的运动范围](https://leetcode-cn.com/problems/ji-qi-ren-de-yun-dong-fan-wei-lcof/)

```cpp
class Solution {
public:
    bool func(int m,int n,int k){
        int tmp=0;
        while(m){
            tmp+=m%10;
            m/=10;
        }
        while(n){
            tmp+=n%10;
            n/=10;
        }
        return tmp<=k;
    }
    int dfs(int m,int n,int i,int j,int k,vector<vector<int>> &visit){
        if(i>=m||i<0||j>=n||j<0||visit[i][j]||!func(i,j,k)) return 0;
        visit[i][j]=1; 
        return dfs(m,n,i-1,j,k,visit)+dfs(m,n,i,j-1,k,visit)+dfs(m,n,i+1,j,k,visit)+dfs(m,n,i,j+1,k,visit)+1;
    }
    int movingCount(int m, int n, int k) {
        if(k<1) return 1;
        vector<vector<int>> visit(m,vector<int>(n,0)); // 重要
        return dfs(m,n,0,0,k,visit); // 从[0,0]出发
    }
};
```
