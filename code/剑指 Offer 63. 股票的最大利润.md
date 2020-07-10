# [剑指 Offer 63. 股票的最大利润](https://leetcode-cn.com/problems/gu-piao-de-zui-da-li-run-lcof/)

+ 注意事项：输入是`[]`时的处理

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<2) return 0;
        int min=prices[0],res=0;
        for(int i=1;i<n;i++){
            if(min>prices[i]) min=prices[i];
            else{
                res=max(prices[i]-min,res);
            }
        }
        return res;
    }
};
```
