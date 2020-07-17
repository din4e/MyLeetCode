# [剑指 Offer 49. 丑数](https://leetcode-cn.com/problems/chou-shu-lcof/)👹

+ 思路介绍：[DP算法的过程](https://leetcode-cn.com/problems/chou-shu-lcof/solution/mian-shi-ti-49-chou-shu-dong-tai-gui-hua-qing-xi-t/)

```cpp
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0]=1;
        int p1=0,p2=0,p3=0;
        for(int i=1;i<n;++i){
            dp[i]=min(min(dp[p1]*2,dp[p2]*3),dp[p3]*5);
            if(dp[i]==dp[p1]*2) ++p1;
            if(dp[i]==dp[p2]*3) ++p2; // else 是不对的
            if(dp[i]==dp[p3]*5) ++p3; // else 是不对的
        }
        return dp[n-1];
    }
};
```

Cpp `priority_queue` `unordered_map` ` unordered_set`的使用

```cpp
class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long, vector<long>, greater<long> > q;
        // unordered_map<long, long> m;
        unordered_set<int> s;
        long res=1;
        q.push(res);
        while(n--){
            res=q.top(); q.pop();
            long t2=res*2,t3=res*3,t5=res*5;
            // if(!m[t2]) q.push(t2),++m[t2];
            // if(!m[t3]) q.push(t3),++m[t3];
            // if(!m[t5]) q.push(t5),++m[t5];
            if(!s.count(t2)) q.push(t2),s.insert(t2);
            if(!s.count(t3)) q.push(t3),s.insert(t3);
            if(!s.count(t5)) q.push(t5),s.insert(t5);
        }
        return res;
    }
};
```