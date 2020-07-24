# [剑指 Offer 58 - II. 左旋转字符串](https://leetcode-cn.com/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof/)

```cpp
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        reverse(s.begin(),s.end());
        auto end=s.end()-n;
        reverse(s.begin(),end);
        reverse(end,s.end());
        return s;
    }
};
```

```cpp
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        return (s+s).substr(n,s.size());
    }
};
```

```c
char* reverseLeftWords(char* s, int n){
    int len = strlen(s); // 不包含 '\0'
    char *p = (char *)malloc(sizeof(char)*len+1);
    strcpy(p,s+n);
    strncpy(p+len-n,s,n);
    p[len]='\0';
    return p;
}
```
