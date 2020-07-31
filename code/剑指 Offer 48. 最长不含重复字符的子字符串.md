# [剑指 Offer 48. 最长不含重复字符的子字符串](https://leetcode-cn.com/problems/zui-chang-bu-han-zhong-fu-zi-fu-de-zi-zi-fu-chuan-lcof/)

## **最快** 双指针

带hash的双指针

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //unordered_map<char,int> m;
        vector<int> m(256,-1);
        int res=0,l=0,r=0;
        while(r<s.size()){
            //if(m.find(s[r])!=m.end()){
            if(m[s[r]]!=-1){
                l=max(l,m[s[r]]+1);
            }
            m[s[r++]] = r;
            res=max(r-l,res);
        }
        return res;
    }
};
```

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size=s.size();
        int ans=0;
        int l=-1;
        vector<int>v(128,-1);
        for(int i=0;i<size;i++){
            l= max(l, v[s[i]]);
            v[s[i]] = i;
            ans=max(ans,(i-l));
        }
        return ans;

    }
};
```
