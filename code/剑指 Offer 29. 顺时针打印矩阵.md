# [剑指 Offer 29. 顺时针打印矩阵](https://leetcode-cn.com/problems/shun-shi-zhen-da-yin-ju-zhen-lcof/)

+ 思路介绍：如果按行或者按列

```cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()==0||matrix[0].size()==0) return {};
        int n0=0,n1=matrix.size()-1,m0=0,m1=matrix[0].size()-1;
        vector<int> res((n1+1)*(m1+1));
        int cnt=0;
        while(1){
            for(int j=m0;j<=m1;++j) res[cnt++]=matrix[n0][j];
            if(++n0>n1) break;
            for(int i=n0;i<=n1;++i) res[cnt++]=matrix[i][m1];
            if(m0>--m1) break;
            for(int j=m1;j>=m0;--j) res[cnt++]=matrix[n1][j];
            if(n0>--n1) break;
            for(int i=n1;i>=n0;--i) res[cnt++]=matrix[i][m0];
            if(++m0>m1) break;
        }
        return res;
    }
};
```