# [剑指 Offer 10- II. 青蛙跳台阶问题](https://leetcode-cn.com/problems/qing-wa-tiao-tai-jie-wen-ti-lcof/)

+ 考察内容：动态规划，比[70. 爬楼梯](code/../70.%20爬楼梯.md)多了取余的分配律
  
```cpp
class Solution {
public:
    int numWays(int n) {
        if(n==1||n==0) return 1;
        long long a=1,b=1,c;
        while(--n){
            c=(a+b)%1000000007;
            a=b;
            b=c;
        }
        return c;
    }
};
```
