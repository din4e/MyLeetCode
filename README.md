# LeetCode 刷题笔记

## 1. 简单数据结构

### 1.1 数组

使用的时候 +1 的确认比较麻烦；

[724. 寻找数组的中心索引](code/724.%20寻找数组的中心索引.md)  
[747. 至少是其他数字两倍的最大数](code/747.%20至少是其他数字两倍的最大数.md)  
[66. 加一](code/66.%20加一.md)

#### 二维数组  

[498. 对角线遍历](code/498.%20对角线遍历.md) 蛇形矩阵输出  
[118. 杨辉三角](code/118.%20杨辉三角.md)  
[119. 杨辉三角 II](code/119.%20杨辉三角%20II.md)

### 链表

[19. 删除链表的倒数第N个节点](code/19.%20删除链表的倒数第N个节点.md) **防止删除后链表为空**，以及递归的思路做
[160. 相交链表](code/160.%20相交链表.md)  
[143. 重排链表](code/143.%20重排链表.md)  
[面试题 02.06. 回文链表](code/面试题%2002.06.%20回文链表.md) 这边快慢指针是`fast->next`和`fast->next->next`做判单依据 链表反转  

### 二叉树

[94. 二叉树的中序遍历](code/94.%20二叉树的中序遍历.md)  
[437. 路径总和 III](code/437.%20路径总和%20III.md)  双递归、**O(n)的优化很巧妙**

### 二叉树和链表

[108. 将有序数组转换为二叉搜索树](code/108.%20将有序数组转换为二叉搜索树.md)->
[876. 链表的中间结点](code/876.%20链表的中间结点.md)->[109. 有序链表转换二叉搜索树](code/109.%20有序链表转换二叉搜索树.md)

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

#### 滑动窗口  

[3. 无重复字符的最长子串](code/3.%20无重复字符的最长子串.md)  
30.串联所有单词的子串  
76.最小覆盖子串  
159.至多包含两个不同字符的最长子串  
[209. 长度最小的子数组](code/209.%20长度最小的子数组.md) 连续子数组问题的常规思路：一是滑动窗口、二是前缀和
239.滑动窗口最大值  
567.字符串的排列  
632.最小区间  
727.最小窗口子序列  

二分
[240. 搜索二维矩阵 II](code/240.%20搜索二维矩阵%20II.md)

### 位运算

[260. 只出现一次的数字 III](code/260.%20只出现一次的数字%20III.md)  
[78. 子集](code/78.%20子集.md) dfs、递归、位运算  
[187. 重复的DNA序列](code/187.%20重复的DNA序列.md) hash、Bitmap、字符串处理 第一次出现和后面几次出现的问题 和 烂橘子有点像  
[1178. 猜字谜](code/1178.%20猜字谜.md) 位运算、string的map

### DP

#### 典型DP

[63. 不同路径 II](code/63.%20不同路径%20II.md)  
[322. 零钱兑换](code/322.%20零钱兑换.md)  
[70. 爬楼梯](code/70.%20爬楼梯.md) DP  
[837. 新21点](code/837.%20新21点.md) 倒序DP+滑动窗口  

#### 状态DP

[44. 通配符匹配](code/44.%20通配符匹配.md) -> [10. 正则表达式匹配](code/10.%20正则表达式匹配.md)

## 题目列表

| 题目序号 | 内容 |
| ---------- | --- |
|[1. 两数之和](code/1.%20两数之和.md)|双指针+hash|
|[2. 两数相加](code/2.%20两数相加.md)|链表操作|
|[3. 无重复字符的最长子串](code/3.%20无重复字符的最长子串.md)|双指针|
|[6. Z 字形变换](code/6.%20Z%20字形变换.md)|模拟|
|[14. 最长公共前缀](code/14.%20最长公共前缀.md)|string+公共前缀|
|[15. 三数之和](code/15.%20三数之和.md)|双指针|
|[16. 最接近的三数之和](code/16.%20最接近的三数之和.md)|双指针|
|[19. 删除链表的倒数第N个节点](code/19.%20删除链表的倒数第N个节点.md)|链表删除|
|[27. 移除元素](code/27.%20移除元素.md)|数组|
|[32. 最长有效括号](code/32.%20最长有效括号.md)|DP|
|[41. 缺失的第一个正数](code/41.%20缺失的第一个正数.md)|hash|
|[67. 二进制求和](code/67.%20二进制求和.md)|string 进制运算 位运算|
|[70. 爬楼梯](code/70.%20爬楼梯.md)|DP|
|[139. 单词拆分](code/139.%20单词拆分.md)👹|DP|
|[125. 验证回文串](code/125.%20验证回文串.md)|string+双指针|
|[207. 课程表](code/207.%20课程表.md)|拓扑排序 bfs dfs|
|[238. 除自身以外数组的乘积](code/238.%20除自身以外数组的乘积.md)|左右累乘|
|[240. 搜索二维矩阵 II](code/240.%20搜索二维矩阵%20II.md)|二分|
|[837. 新21点](code/837.%20新21点.md)|DP+滑动窗口|
|[887. 鸡蛋掉落](code/887.%20鸡蛋掉落.md)|DP+二分法|
|[1178. 猜字谜](code/1178.%20猜字谜.md)|hash+位运算+位运算枚举|
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
|[面试题 03.03. 三合一](code/面试题%2003.01.%20三合一.md)|模拟 双栈 者空间优化|
|[面试题 04.01. 节点间通路](code/面试题%2004.01.%20节点间通路.md)|dfs bfs|
|[面试题 04.02. 最小高度树](code/面试题%2004.02.%20最小高度树.md)|递归 二分 指针的操作|
|[面试题 04.03. 特定深度节点链表](code/面试题%2004.03.%20特定深度节点链表.md)👹|链表 树 bfs|
|[面试题57 - II. 和为s的连续正数序列](code/面试题57%20-%20II.%20和为s的连续正数序列.md)|双指针+滑动窗口|
|[剑指 Offer 10- II. 青蛙跳台阶问题](code/剑指%20Offer%2010-%20II.%20青蛙跳台阶问题.md)|DP+int越界|
|[剑指 Offer 68 - II. 二叉树的最近公共祖先](code/剑指%20Offer%2068%20-%20II.%20二叉树的最近公共祖先.md)👹|递归+二叉树|

## 周赛记录

### 177

[1360. 日期之间隔几天](code/1360.%20日期之间隔几天.md) 字符串处理和时间换算

### [周赛178](https://leetcode-cn.com/contest/weekly-contest-178/ranking/)

[1365. 有多少小于当前数字的数字](code/1365.%20有多少小于当前数字的数字.md) 暴力  
[1366. 通过投票对团队排名](code/1366.%20通过投票对团队排名.md)  直接懵了  
[1367. 二叉树中的列表](code/1367.%20二叉树中的列表.md) 双递归+二叉树  
[1368. 使网格图至少有一条有效路径的最小代价](code/1368.%20使网格图至少有一条有效路径的最小代价.md)  最有一题直接放弃  

很慌 但是也没答的多好，我做一题的时间够别人写一次；一般前几题直接暴力的做就好了。还没上二叉树的题目。

### [双周赛21](https://leetcode-cn.com/contest/biweekly-contest-21/)

[]() dfs的方式不一样，确实不一样啊
