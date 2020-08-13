# [剑指 Offer 39. 数组中出现次数超过一半的数字](https://leetcode-cn.com/problems/shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-ban-de-shu-zi-lcof/)

+ 摩尔投票法：时间复杂度 $O(N)$， 空间复杂度 $O(1)$

```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res =0,cnt=0;
        for(auto &it:nums){
            if(cnt==0){
                res=it;++cnt;
            }
            else{
                res==it?++cnt:--cnt; // !
            }
        }
        return res;
    }
};
```
