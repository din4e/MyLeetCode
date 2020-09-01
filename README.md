# LeetCode 刷题笔记

## 1. 数据结构

### 1.1 数组
  
使用的时候 +1 的确认比较麻烦；

+ 一维数组
  + [66. 加一](code/66.%20加一.md)
  + [724. 寻找数组的中心索引](code/724.%20寻找数组的中心索引.md)
  + [747. 至少是其他数字两倍的最大数](code/747.%20至少是其他数字两倍的最大数.md)  
+ 一维数组找规律
  + [696. 计数二进制子串](code/696.%20计数二进制子串.md)
+ 二维数组  
  + [118. 杨辉三角](code/118.%20杨辉三角.md)  
  + [119. 杨辉三角 II](code/119.%20杨辉三角%20II.md)
  + [130. 被围绕的区域](code/130.%20被围绕的区域.md)
  + [498. 对角线遍历](code/498.%20对角线遍历.md) 蛇形矩阵输出  
  + [807. 保持城市天际线](code/807.%20保持城市天际线.md)

### 1.2 `string`

`find()`、`substr()`的使用，合理使用string类型比大小的性质。

+ `substr()`: `basic_string substr( size_type pos = 0, size_type count = npos ) const;`
+ `isalnum()`
+ `tolower()`
+ `find_first_not_of()`  

```cpp
int i=s.find_first_not_of(' ');
if(i==string::npos) return false;
int j=s.find_last_not_of(' '); // mn
s=s.substr(i,j-i+1);
```

+ [8. 字符串转换整数 (atoi)](code/8.%20字符串转换整数%20(atoi).md) 比较繁琐，有些细节要注意
+ [28. 实现 strStr()](code/28.%20实现%20strStr().md) KMP
+ [14. 最长公共前缀](code/14.%20最长公共前缀.md)  
+ [面试题 01.09. 字符串轮转](code/面试题%2001.09.%20字符串轮转.md)

### 1.3 链表

+ 链表
  + [19. 删除链表的倒数第N个节点](code/19.%20删除链表的倒数第N个节点.md) 1. **防止删除后链表为空** 2. 递归的思路
  + [24. 两两交换链表中的节点](code/24.%20两两交换链表中的节点.md) 链表交换
  + [25. K 个一组翻转链表](code/25.%20K%20个一组翻转链表.md) 链表的翻转要3个指针
  + [141. 环形链表](code/141.%20环形链表.md) 判断环
  + [143. 重排链表](code/143.%20重排链表.md)  
  + [160. 相交链表](code/160.%20相交链表.md)  
  + [面试题 02.06. 回文链表](code/面试题%2002.06.%20回文链表.md) 这边快慢指针是`fast->next`和`fast->next->next`做判单依据 链表反转  

### 1.4 栈

+ [42. 接雨水](code/41.%20缺失的第一个正数.md) 单调栈
+ [739. 每日温度](code/739.%20每日温度.md)👹 递减栈

求解算术表达式的结果（LeetCode 224、227、772、770)
求解直方图里最大的矩形区域（LeetCode 84）

### 1.5 二叉树

+ 二叉树遍历
  + [94. 二叉树的中序遍历](code/94.%20二叉树的中序遍历.md)  
  + [95. 不同的二叉搜索树 II](code/95.%20不同的二叉搜索树%20II.md) 返回vector<*TreeNode>
  + [110. 平衡二叉树](code/110.%20平衡二叉树.md)
  + [111. 二叉树的最小深度](code/111.%20二叉树的最小深度.md)
  + [112. 路径总和](code/112.%20路径总和.md) 递归  
  + [113. 路径总和 II](code/113.%20路径总和%20II.md) 递归  
  + [437. 路径总和 III](code/437.%20路径总和%20III.md)  双递归、**O(n)的优化很巧妙**、前缀和
  + [543. 二叉树的直径](code/543.%20二叉树的直径.md)

+ 二叉树和链表
  + [108. 将有序数组转换为二叉搜索树](code/108.%20将有序数组转换为二叉搜索树.md)
  + [109. 有序链表转换二叉搜索树](code/109.%20有序链表转换二叉搜索树.md) 双指针
  + [114. 二叉树展开为链表](code/114.%20二叉树展开为链表.md)
  + [876. 链表的中间结点](code/876.%20链表的中间结点.md)

### 1.6 `priority_queue`、`unordered_map`以及` unordered_set`

```cpp
priority_queue<long, vector<long>, greater<long> > q; // 这是小顶堆
priority_queue<long, vector<long>, less<long> > q;    // 默认是大顶堆
unordered_map<int, int> m;
if(!m[i]) ++m[i];

unordered_set<int> s;
if(!s.count(i)) s.insert(i);

set<int> s;
if(s.find(i)!=s.end()) s.insert(i);
```

+ `priority_queue`
  + [23. 合并K个排序链表](code/23.%20合并K个排序链表.md)
  + [剑指 Offer 49. 丑数](code/剑指%20Offer%2049.%20丑数.md)

### 1.7 图论

+ 二部图
  + [785. 判断二分图](code/785.%20判断二分图.md) DFS和BFS都要会
  + [886. 可能的二分法](code/886.%20可能的二分法.md) 多了数据处理

## 2. 算法

### 2.1 双指针

1. 从两端向中间迭代数组：一个指针从始端开始，而另一个指针从末端开始，比如排序；
2. 使用两个**不同步**的指针来，快慢指针，比如滑动窗口。
某一些有序情况下，可以进行二分，二分本质上也是双指针。

```cpp
while(l<r && (...)){ // 需要自己挖掘
    if(condition) {l;r;}
    else if(condition) {do();}
}
```

+ 使用场合：一维，二维数组，字符串交换

+ 数字之和系列
  + [1. 两数之和](code/1.%20两数之和.md)
  + [15. 三数之和](code/15.%20三数之和.md)
  + [18. 四数之和](code/18.%20四数之和.md) **加入上届下届的剪枝**  
  + [454. 四数相加 II](code/454.%20四数相加%20II.md)

[11. 盛最多水的容器](code/11.%20盛最多水的容器.md)  
[344. 反转字符](code/344.%20反转字符.md)  

[27. 移除元素](code/27.%20移除元素.md)  
[485. 最大连续1的个数](code/485.%20最大连续1的个数.md)  
[209. 长度最小的子数组](code/209.%20长度最小的子数组.md) 滑动窗口也是双指针。  
[面试题57 - II. 和为s的连续正数序列](code/面试题57%20-%20II.%20和为s的连续正数序列.md)

+ 滑动窗口
  + [3. 无重复字符的最长子串](code/3.%20无重复字符的最长子串.md)  
  + 30.串联所有单词的子串  
  + 76.最小覆盖子串  
  + 159.至多包含两个不同字符的最长子串  
  + [209. 长度最小的子数组](code/209.%20长度最小的子数组.md) 连续子数组问题的常规思路：1. 滑动窗口 2. 前缀和  
  + 239.滑动窗口最大值  
  + 567.字符串的排列  
  + 632.最小区间  
  + 727.最小窗口子序列  

+ 二分
  + [剑指 Offer 53 - II. 0～n-1中缺失的数字](code/剑指%20Offer%2053%20-%20II.%200～n-1中缺失的数字.md)
  + [4. 寻找两个正序数组的中位数](code/4.%20寻找两个正序数组的中位数.md)
  + [240. 搜索二维矩阵 II](code/240.%20搜索二维矩阵%20II.md)

### 2.2 搜索

+ DFS
  + [329. 矩阵中的最长递增路径](code/329.%20矩阵中的最长递增路径.md) BFS会慢一点
  + [547. 朋友圈](code/547.%20朋友圈.md) DFS 并查集

### 2.3 位运算

+ 异或去重
  + [260. 只出现一次的数字 III](code/260.%20只出现一次的数字%20III.md)  
  + [78. 子集](code/78.%20子集.md) dfs、递归、位运算  
+ 位运算记录
  + [187. 重复的DNA序列](code/187.%20重复的DNA序列.md) hash、Bitmap、字符串处理 第一次出现和后面几次出现的问题 和 烂橘子有点像  
+ 遍历集合
  + [1178. 猜字谜](code/1178.%20猜字谜.md) 位运算、string的map

### 2.4 前缀和

[303]
[307]
[树状数组](https://leetcode-cn.com/problems/count-of-smaller-numbers-after-self/solution/shu-zhuang-shu-zu-by-liweiwei1419/)

### 2.5 DP

+ [力扣的 DP 汇总](https://leetcode-cn.com/circle/article/NfHhXD/)
+ DP基本步骤：
  1. 定义状态
  2. 考虑状态转移方程
  3. 考虑初始化
  4. 考虑状态压缩 [滚动数组思想在动态规划的使用](https://blog.csdn.net/weixin_40295575/article/details/80181756)

#### 2.5.1 线性 DP

+ 单串
  + [32. 最长有效括号](code/32.%20最长有效括号.md)
  + [70. 爬楼梯](code/70.%20爬楼梯.md)
  + [300. 最长上升子序列](code/300.%20最长上升子序列.md) DP+二分
  + [322. 零钱兑换](code/322.%20零钱兑换.md)
+ 双串
  + [1143. 最长公共子序列](code/1143.%20最长公共子序列.md) DP+滚动数组
  + [410. 分割数组的最大值](code/410.%20分割数组的最大值.md) 数值计算的溢出问题
+ 经典问题：
  + [120. 三角形最小路径和](code/120.%20三角形最小路径和.md) DP+自底向上迭代

[63. 不同路径 II](code/63.%20不同路径%20II.md)  
[64. 最小路径和](code/64.%20最小路径和.md)  

[837. 新21点](code/837.%20新21点.md) 倒序DP+滑动窗口  
[1025. 除数博弈](code/1025.%20除数博弈.md) 线性DP

+ 股票系列
  + [121. 买卖股票的最佳时机](code/121.%20买卖股票的最佳时机.md)  
  + [122. 买卖股票的最佳时机 II](code/122.%20买卖股票的最佳时机%20II.md)  
  + [123. 买卖股票的最佳时机 III](code/123.%20买卖股票的最佳时机%20III.md)  
  + [188. 买卖股票的最佳时机 IV](code/188.%20买卖股票的最佳时机%20IV.md)
  + [309. 最佳买卖股票时机含冷冻期](code/309.%20最佳买卖股票时机含冷冻期.md)  

+ 字符串匹配系列
  + [10. 正则表达式匹配](code/10.%20正则表达式匹配.md)
  + [44. 通配符匹配](code/44.%20通配符匹配.md)
  + [97. 交错字符串](code/97.%20交错字符串.md) dp存的状态
  + [392. 判断子序列](code/392.%20判断子序列.md) dp存在下一个出现index
  + [647. 回文子串](code/647.%20回文子串.md) dp存的状态

#### 2.5.2 数位DP

+ [233. 数字 1 的个数](code/233.%20数字%201%20的个数.md)👹

#### 2.5.3 树状DP

+ [95. 不同的二叉搜索树 II](code/95.%20不同的二叉搜索树%20II.md)
+ [337. 打家劫舍 III](code/337.%20打家劫舍%20III.md)

## 3. 专题

### 3.1 全排列

+ 全排列-回溯
  + [22. 括号生成](code/22.%20括号生成.md) DFS/BFS/DP
  + [39. 组合总和]()
  + [40. 组合总和 II]()
  + [46. 全排列](code/46.%20全排列.md)
  + [47. 全排列 II]()
  + [78. 子集]()
  + [90. 子集 II]()

+ 括号匹配
  + [32. 最长有效括号](code/32.%20最长有效括号.md)

## 4. 题目列表

| 题目序号 | 内容 |
| ---------- | --- |
|[1. 两数之和](code/1.%20两数之和.md)|双指针+hash|
|[2. 两数相加](code/2.%20两数相加.md)|链表操作|
|[3. 无重复字符的最长子串](code/3.%20无重复字符的最长子串.md)|双指针|
|[6. Z 字形变换](code/6.%20Z%20字形变换.md)|模拟|
|[14. 最长公共前缀](code/14.%20最长公共前缀.md)|string+公共前缀|
|[15. 三数之和](code/15.%20三数之和.md)|双指针|
|[16. 最接近的三数之和](code/16.%20最接近的三数之和.md)|双指针|
|[17. 电话号码的字母组合](code/17.%20电话号码的字母组合.md)|map+回溯|
|[19. 删除链表的倒数第N个节点](code/19.%20删除链表的倒数第N个节点.md)|链表删除|
|[22. 括号生成](code/22.%20括号生成.md)|DFS/BFS/DP|
|[25. K 个一组翻转链表](code/25.%20K%20个一组翻转链表.md)|链表翻转/递归|
|[27. 移除元素](code/27.%20移除元素.md)|数组|
|[32. 最长有效括号](code/32.%20最长有效括号.md)|DP+栈|
|[41. 缺失的第一个正数](code/41.%20缺失的第一个正数.md)|hash|
|[42. 接雨水](code/41.%20缺失的第一个正数.md)|DP / 单调栈|
|[67. 二进制求和](code/67.%20二进制求和.md)|string 进制运算 位运算|
|[70. 爬楼梯](code/70.%20爬楼梯.md)|DP|
|[95. 不同的二叉搜索树 II](code/95.%20不同的二叉搜索树%20II.md)👹|递归 树形DP|
|[139. 单词拆分](code/139.%20单词拆分.md)👹|DP|
|[125. 验证回文串](code/125.%20验证回文串.md)|string+双指针|
|[207. 课程表](code/207.%20课程表.md)|拓扑排序 bfs dfs|
|[238. 除自身以外数组的乘积](code/238.%20除自身以外数组的乘积.md)|左右累乘|
|[240. 搜索二维矩阵 II](code/240.%20搜索二维矩阵%20II.md)|二分|
|[309. 最佳买卖股票时机含冷冻期](code/309.%20最佳买卖股票时机含冷冻期.md)|DP 状态机|
|[486. 预测赢家](code/486.%20预测赢家.md)|DP 递归|
|[739. 每日温度](code/739.%20每日温度.md)👹|递减栈|
|[837. 新21点](code/837.%20新21点.md)|DP + 滑动窗口|
|[887. 鸡蛋掉落](code/887.%20鸡蛋掉落.md)|DP + 二分法|
|[1178. 猜字谜](code/1178.%20猜字谜.md)|hash + 位运算 + 位运算枚举|
|[1367. 二叉树中的列表](code/1367.%20二叉树中的列表.md)|双递归 + 二叉树|
|[1542. 找出最长的超赞子字符串](code/1542.%20找出最长的超赞子字符串.md)|位运算 + 状态压缩 + DP|
|[LCP 13. 寻宝](code/LCP%2013.%20寻宝.md)|位运算 + DP + bfs|
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
|[面试题 08.03. 魔术索引](code/面试题%2008.03.%20魔术索引.md)|二分/有序数组|
|[面试题 16.19. 水域大小](code/面试题%2016.19.%20水域大小.md)|dfs|
|[面试题57 - II. 和为s的连续正数序列](code/面试题57%20-%20II.%20和为s的连续正数序列.md)|双指针+滑动窗口|
|[剑指 Offer 10- II. 青蛙跳台阶问题](code/剑指%20Offer%2010-%20II.%20青蛙跳台阶问题.md)|DP+int越界|
|[剑指 Offer 49. 丑数](code/剑指%20Offer%2049.%20丑数.md)👹|DP 最小堆|
|[剑指 Offer 63. 股票的最大利润](code/剑指%20Offer%2063.%20股票的最大利润.md)||
|[剑指 Offer 68 - II. 二叉树的最近公共祖先](code/剑指%20Offer%2068%20-%20II.%20二叉树的最近公共祖先.md)👹|递归+二叉树|

## 5. 周赛记录

### 177

[1360. 日期之间隔几天](code/1360.%20日期之间隔几天.md) 字符串处理和**时间换算**

### [周赛178](https://leetcode-cn.com/contest/weekly-contest-178/ranking/)

[1365. 有多少小于当前数字的数字](code/1365.%20有多少小于当前数字的数字.md) 暴力  
[1366. 通过投票对团队排名](code/1366.%20通过投票对团队排名.md)  直接懵了  
[1367. 二叉树中的列表](code/1367.%20二叉树中的列表.md) 双递归+二叉树  
[1368. 使网格图至少有一条有效路径的最小代价](code/1368.%20使网格图至少有一条有效路径的最小代价.md)  最有一题直接放弃  

很慌 但是也没答的多好，我做一题的时间够别人写一次；一般前几题直接暴力的做就好了。还没上二叉树的题目。

### [双周赛21](https://leetcode-cn.com/contest/biweekly-contest-21/)

dfs的方式不一样，确实不一样啊
