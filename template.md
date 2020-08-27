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

KMP带cnt

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
    i=0,j=0;int res=0;
    while(i<m){
        if(j==-1||S[i]==P[j]) {
          if(j==n-1) {
            ++res;
            j=next[j];
          }       
          else ++i,++j;
        }
        else j=next[j];
    }
    return res;
}
```

## 快排

```cpp
void quicksortv1(vector<int> &a,int l,int r){
    if(l>=r) return;
    int ll=l,rr=r;//cout<<l<<" "<<r<<"\n";
    int key=a[l];
    while(l<r){
        while(a[r]>key&&l<r) r--;
        a[l]=a[r];
        while(a[l]<=key&&l<r) l++;
        a[r]=a[l];
    }
    a[l]=key;
    quicksortv1(a,ll,l-1);
    quicksortv1(a,l+1,rr);
}
```
