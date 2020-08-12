# template

## 递归/回溯/二分

## KMP

```cpp
int KMP(string P, string S) {
    int n=P.size(),m=S.size();
    if(n==0) return 0;
    vector<int> next(n,-1);
    int i=0,j=-1;
    while(i<n-1){ // i=n-1 的话就匹配上了
        if(j==-1||P[i]==P[j])
            next[++i]=++j;
        else j=next[j];
    }
    i=0,j=0;
    while(i<m&&j<n){
        if(j==-1||S[i]==P[j]) ++i,++j;
        else j=next[j];
    }
    return j==n?i-j:-1;
}
```
