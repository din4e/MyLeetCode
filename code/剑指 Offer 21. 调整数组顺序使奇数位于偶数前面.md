# [剑指 Offer 21. 调整数组顺序使奇数位于偶数前面](https://leetcode-cn.com/problems/diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof/)

```cpp
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<r){
            while(l<r&&(nums[l]&1)) ++l;
            while(l<r&&(nums[r]&1)==0) --r;
            if(l<r) swap(nums[l],nums[r]);
            //++l,--r; // 忘了
        }
        return nums;
    }
};
```

```cpp
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            if ((nums[left] & 1) != 0) {
                left ++;
                continue;
            }
            if ((nums[right] & 1) != 1) {
                right --;
                continue;
            }
            swap(nums[left++], nums[right--]);
        }
        return nums;
    }
};
```

```cpp
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int i = -1;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] % 2 == 1)
                swap(nums[++i], nums[j]);
        }
        return nums;
    }
};
```