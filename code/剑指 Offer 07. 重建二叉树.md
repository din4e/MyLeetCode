# [剑指 Offer 07. 重建二叉树](https://leetcode-cn.com/problems/zhong-jian-er-cha-shu-lcof/)

+ 注意事项：前序和中序不是对齐的

```cpp
class Solution {
public:
    TreeNode* dfs(vector<int>& preorder,int p1, int p2,vector<int>& inorder,int i1, int i2){
        if(p1>=p2) return NULL; 
        TreeNode *p=new TreeNode(preorder[p1]);
        int i=i1;
        for(i=i1;i<i2;++i)
            if(inorder[i]==preorder[p1])
                break;
        p->left=dfs(preorder,p1+1,p1+i-i1+1,inorder,i1,i); // !
        p->right=dfs(preorder,p1+i+1-i1,p2,inorder,i+1,i2); // !
        return p;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0) return NULL;
        return dfs(preorder,0,preorder.size(),inorder,0,inorder.size());
    }
};
```

迭代器深度定制版本

```cpp
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return recursionBuild(preorder.begin(),preorder.end(),inorder.begin(),inorder.end());
    }

    TreeNode* recursionBuild(vector<int>::iterator preBegin, vector<int>::iterator preEnd,vector<int>::iterator inBegin, vector<int>::iterator inEnd )
    {
        if(inEnd==inBegin) return NULL;
        TreeNode* cur = new TreeNode(*preBegin);
        auto root = find(inBegin,inEnd,*preBegin);
        cur->left = recursionBuild(preBegin+1,preBegin+1+(root-inBegin),inBegin,root);
        cur->right = recursionBuild(preBegin+1+(root-inBegin),preEnd,root+1,inEnd);
        return cur;
    }
};
```