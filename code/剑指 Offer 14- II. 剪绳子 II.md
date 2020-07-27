# [剑指 Offer 14- II. 剪绳子 II](https://leetcode-cn.com/problems/jian-sheng-zi-ii-lcof/)

## 数学法

+ 思路介绍：[证明](https://leetcode-cn.com/problems/jian-sheng-zi-ii-lcof/solution/mian-shi-ti-14-ii-jian-sheng-zi-iitan-xin-er-fen-f/)

```cpp
class Solution {
public:
    int cuttingRope(int n) {
        if(n<4) return n-1;
        if(n==4) return 4;
        long res=1;
        for(;n>4;n-=3){
            res*=3;
            res%=1000000007;
        }
        return (res*n)%1000000007;
    }
};
```
