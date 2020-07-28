# [剑指 Offer 16. 数值的整数次方](https://leetcode-cn.com/problems/shu-zhi-de-zheng-shu-ci-fang-lcof/)

```cpp
class Solution {
public:
    double myPow(double x, int n) {
        if(x==0.0) return 0;
        long b=n;
        if(n<0){
            x=1/x;
            b=-b;
        }
        double res=1; // ! 主要是快速幂
        while(b>0){
            if((b&1)==1) res*=x;
            x*=x;
            b>>=1;
        }
        return res;
    }
};s
```

```cpp
class Solution {
public:
    double myPow(double x, int n) {
        bool flag = false;
        long long N = n;
        if(N==0) return 1;
        if(n<0) flag=true,N=-N;
        double ret=1;
        for(int i=0;i<32;++i){
            if((1<<i)&N) ret*=x;
            x = x*x;
        }

        if(flag) return 1.0/ret; // !
        return ret;
    }
};
```
