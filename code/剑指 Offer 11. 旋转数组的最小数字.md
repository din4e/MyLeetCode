# [剑指 Offer 11. 旋转数组的最小数字](https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/)

```cpp
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int n=numbers.size();
        if(n<2) return numbers[0];
        int l=0,r=n-1,m; 
        while(l<r){
            m=l+((r-l)>>1); //
            if(numbers[m]>numbers[r]) l=m+1;
            else if(numbers[m]<numbers[r]) r=m;
            else r--; // !!
        }
        return numbers[l]; // ?
    }
};
```
