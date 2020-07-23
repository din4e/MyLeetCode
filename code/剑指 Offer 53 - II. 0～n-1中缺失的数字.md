# [剑指 Offer 53 - II. 0～n-1中缺失的数字](https://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof/)

+ 思路介绍：有提到是有序数组就要考虑二分

```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //if(nums.size()==1) return nums[0]==1?0:1;
        int l=0,r=nums.size()-1,m;
        while(l<=r){ // !!
            m=l+((r-l)>>1); // !!
            if(nums[m]==m)  l=m+1;
            else r=m-1;
        }
        return l;
    }
};
```
