# [剑指 Offer 20. 表示数值的字符串](https://leetcode-cn.com/problems/biao-shi-shu-zhi-de-zi-fu-chuan-lcof/)

```cpp
class Solution {
public:
    bool isN(char c){
        return '0'<=c&&c<='9';
    }
    bool isNumber(string s) {
        int i=s.find_first_not_of(' ');
        if(i==string::npos) return false;
        int j=s.find_last_not_of(' '); // mn
        s=s.substr(i,j-i+1);
        if(s.empty()) return false;
        int n=s.size();
        i=0;
        bool hasD=false,hasE=false,hasN=false;
        for(i=0;i<n;++i){
            if(isN(s[i])) {
                hasN=true;
            }
            else if(s[i]=='.'){
                if(hasD||hasE) return false; // 小数部分不能有 e 只能出现一次
                hasD=true;
            } 
            else if(s[i]=='e'){ 
                if((!hasN)||hasE) return false;
                // 之前需要出现数字 e9 不能出现两个 2e231e
                // 后面的数字重新计数
                hasE=true;
                hasD=false;
                hasN=false;
            }
            else if((i==0||s[i-1]=='e')&&(s[i]=='+'||s[i]=='-')) ;
            else return false;
        }
        return hasN&&i==n;
    }
};
```

错误代码

```cpp
class Solution {
public:
    bool isNumber(string s) {
        // int i=s.find_first_not_of(' ');
        // if(i==string::npos) return false;
        // int j=s.find_last_not_of(' ');
        // s=s.substr(i,j-i+1);
        // if(s.empty()) return false;
        int n=s.size();
        int i=0;
        while(s[i]==' '&&i<n) ++i;
        while(s[n-1]==' '&&n-1>0) --n;
        if(i+1>n) return false;
```
