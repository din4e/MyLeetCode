# [剑指 Offer 45. 把数组排成最小的数](https://leetcode-cn.com/problems/ba-shu-zu-pai-cheng-zui-xiao-de-shu-lcof/comments/)

```cpp
class Solution {
public:
    string minNumber(vector<int>& nums) {
        int n=nums.size();
        vector<string> s(n);
        int i=0;
        for(auto it:nums)   s[i++]=to_string(it);
        sort(s.begin(),s.end(),[](string &a,string &b){return a+b<b+a;}); //!
        string res;
        for(auto &it:s) res+=it;
        return res;
    }
};
```
