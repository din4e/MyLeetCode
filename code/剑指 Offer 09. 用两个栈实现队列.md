# [剑指 Offer 09. 用两个栈实现队列](https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/)

+ 题目要求：
  1. 在队列尾部插入整数
  2. 在队列头部删除整数的功能。
  3. 若队列中没有元素，deleteHead 操作返回 -1

```cpp
class CQueue {
public:
    stack<int> s1,s2;
    CQueue() {
    }

    void appendTail(int value) {
        s1.push(value);
    }

    int deleteHead() {
        if(s2.empty()&&s1.empty()) return -1;
        if(s2.empty()) {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int tmp=s2.top();s2.pop();
        return tmp;
    }
};
```
