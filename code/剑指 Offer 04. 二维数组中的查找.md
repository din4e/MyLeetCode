# [剑指 Offer 04. 二维数组中的查找](https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/)

```cpp
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int i=matrix.size()-1,j=0; // 优秀
        while(i>=0&&j<matrix[0].size()){
            if(matrix[i][j]==target) return true;
            if(matrix[i][j]>target) --i;
            else ++j;
        }
        return false;
    }
};
```