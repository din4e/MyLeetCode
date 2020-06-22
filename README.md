# LeetCode 刷题笔记

## 简单数据结构

### 数组

使用的时候 +1 的确认比较麻烦；

[724. 寻找数组的中心索引](code/724.%20寻找数组的中心索引.md)  
[747. 至少是其他数字两倍的最大数](code/747.%20至少是其他数字两倍的最大数.md)  
[66. 加一](code/66.%20加一.md)

二维数组  

[498. 对角线遍历](code/498.%20对角线遍历.md) 蛇形矩阵输出  
[118. 杨辉三角](code/118.%20杨辉三角.md)  
[119. 杨辉三角 II](code/119.%20杨辉三角%20II.md)

### 链表

[19. 删除链表的倒数第N个节点](code/19.%20删除链表的倒数第N个节点.md) **防止删除后链表为空**。  
[160. 相交链表](code/160.%20相交链表.md)  
[143. 重排链表](code/143.%20重排链表.md)  
|[面试题 02.06. 回文链表](code/面试题%2002.06.%20回文链表.md)  链表反转  

### 二叉树

[94. 二叉树的中序遍历](code/94.%20二叉树的中序遍历.md)  
[437. 路径总和 III](code/437.%20路径总和%20III.md)  双递归、**O(n)的优化很巧妙**

### `String`

`find()`、`substr()`的使用，合理使用string类型比大小的性质。
`isalnum()`、`tolower()`。

[14. 最长公共前缀](code/14.%20最长公共前缀.md)  
[面试题 01.09. 字符串轮转](code/面试题%2001.09.%20字符串轮转.md)

## 算法

### 双指针

1. 从两端向中间迭代数组：一个指针从始端开始，而另一个指针从末端开始，比如排序；
2. 使用两个**不同步**的指针来，快慢指针，比如滑动窗口。
某一些有序情况下，可以进行二分，二分本质上也是双指针。

```cpp
while(l<r && (...)){ // 需要自己挖掘
    if(condition) {l;r;}
    else if(condition) {do();}
}
```

[1. 两数之和](code/1.%20两数之和.md) -> [15. 三数之和](code/15.%20三数之和.md)  

[344. 反转字符](code/344.%20反转字符.md)  

[27. 移除元素](code/27.%20移除元素.md)  
[485. 最大连续1的个数](code/485.%20最大连续1的个数.md)  
[209. 长度最小的子数组](code/209.%20长度最小的子数组.md) 滑动窗口也是双指针。  
[面试题57 - II. 和为s的连续正数序列](code/面试题57%20-%20II.%20和为s的连续正数序列.md)

### 位运算

[78. 子集](code/78.%20子集.md) dfs、递归、位运算  
[187. 重复的DNA序列](code/187.%20重复的DNA序列.md) hash、Bitmap、字符串处理 第一次出现和后面几次出现的问题 和 烂橘子有点像  
[1178. 猜字谜](code/1178.%20猜字谜.md) 位运算、string的map

### DP

[322. 零钱兑换](code/322.%20零钱兑换.md)  
[70. 爬楼梯](code/70.%20爬楼梯.md) DP  
[837. 新21点](code/837.%20新21点.md) 倒序DP+滑动窗口

## 周赛记录

### 177

[1360. 日期之间隔几天](code/1360.%20日期之间隔几天.md) 字符串处理和时间换算；

### [周赛178](https://leetcode-cn.com/contest/weekly-contest-178/ranking/)

[1365. 有多少小于当前数字的数字](code/1365.%20有多少小于当前数字的数字.md) 暴力  
[1366. 通过投票对团队排名](code/1366.%20通过投票对团队排名.md)  直接懵了  
[1367. 二叉树中的列表](code/1367.%20二叉树中的列表.md) 双递归+二叉树  
[1368. 使网格图至少有一条有效路径的最小代价](code/1368.%20使网格图至少有一条有效路径的最小代价.md)  最有一题直接放弃  

很慌 但是也没答的多好，我做一题的时间够别人写一次；一般前几题直接暴力的做就好了。还没上二叉树的题目。

### [双周赛21](https://leetcode-cn.com/contest/biweekly-contest-21/)

[]() dfs的方式不一样，确实不一样啊

## 题目列表

| 题目序号 | 内容 |
| ---------- | --- |
|[1. 两数之和](code/1.%20两数之和.md)|双指针+hash|
|[2. 两数相加](code/2.%20两数相加.md)|链表操作|
|[14. 最长公共前缀](code/14.%20最长公共前缀.md)|string+公共前缀|
|[15. 三数之和](code/15.%20三数之和.md)|双指针|
|[19. 删除链表的倒数第N个节点](code/19.%20删除链表的倒数第N个节点.md)|链表删除|
|[27. 移除元素](code/27.%20移除元素.md)|数组|
|[70. 爬楼梯](code/70.%20爬楼梯.md)|DP|
|[125. 验证回文串](code/125.%20验证回文串.md)|string+双指针|
|[207. 课程表](code/207.%20课程表.md)|拓扑排序 bfs dfs|
|[238. 除自身以外数组的乘积](code/238.%20除自身以外数组的乘积.md)|左右累乘|
|[837. 新21点](code/837.%20新21点.md)|DP+滑动窗口|
|[1367. 二叉树中的列表](code/1367.%20二叉树中的列表.md)|双递归+二叉树|
|[面试题 01.02. 判定是否互为字符重排](code/面试题%2001.02.%20判定是否互为字符重排.md)| |
|[面试题 01.03. URL化](code/面试题%2001.03.%20URL化.md)|双指针+string空间优化|
|[面试题 01.07. 旋转矩阵](code/面试题%2001.07.%20旋转矩阵.md)|数学推导|
|[面试题 01.09. 字符串轮转](code/面试题%2001.09.%20字符串轮转.md)|string和[160. 相交链表](code/160.%20相交链表.md)有点像|
|[面试题 02.04. 分割链表](code/面试题%2002.04.%20分割链表.md)|链表|
|[面试题 02.05. 链表求和](code/面试题%2002.05.%20链表求和.md)|链表|
|[面试题 02.06. 回文链表](code/面试题%2002.06.%20回文链表.md)|链表翻转|
|[面试题 02.07. 链表相交](code/面试题%2002.07.%20链表相交.md)|链表+双指针|
|[面试题 02.08. 环路检测](code/面试题%2002.08.%20环路检测.md)|链表+双指针|
|[面试题 03.01. 三合一](code/面试题%2003.01.%20三合一.md)|模拟|
|[面试题 03.02. 栈的最小值](code/面试题%2003.02.%20栈的最小值.md)|模拟|
|[面试题 03.03. 三合一](code/面试题%2003.01.%20三合一.md)|模拟+双栈或者空间优化|
|[面试题 04.02. 最小高度树](code/面试题%2004.02.%20最小高度树.md)|递归 二分 指针的操作|
|[面试题57 - II. 和为s的连续正数序列](code/面试题57%20-%20II.%20和为s的连续正数序列.md) |双指针+滑动窗口|
