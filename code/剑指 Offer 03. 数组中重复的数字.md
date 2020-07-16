# [剑指 Offer 03. 数组中重复的数字](https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/)

+ 注意事项:1~N

```cpp
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto &it:nums){
            if(!m[it]) m[it]++;
            else return it;
            //if(!m[it]++) return it; // 错误写法
        }
        return 0;
    }
};
```

原地置换

```cpp
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int tmp;
        for(int i=0;i<nums.size();++i){
            while(i!=nums[i]){
                if(nums[i]==nums[nums[i]]) return nums[i];
                tmp=nums[i];
                nums[i]=nums[tmp];
                nums[tmp]=tmp;
            }
        }
        return 0;
    }
};
```