#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    struct z{
        int i;
        int val;
    };
    vector<z> a(n);
    // unorder_map<int,int> m;
    for(int i=0;i<n;++i){
        a[i].i=i;
        cin>>a[i].val;
    }
    sort(a.begin(),a.end(),[](z &x,z &y){return x.val<y.val;});
    vector<int> b(n);
    for(int i=0;i<n;++i){
        b[a[i].i]=i;
    }
    if(n&1==1){ // 奇数
        int mid=(n-1)/2; // index
        for(int i=0;i<n;++i)
            if(b[i]<mid) cout<<a[mid-1].val<<"\n";
            else cout<<a[mid].val<<"\n";
    }
    else{ // 偶数
        int mid=(n-1)/2; // index
        for(int i=0;i<n;++i)
            if(b[i]<=mid) cout<<a[mid+1].val<<"\n";
            else cout<<a[mid].val<<"\n";
    }
    // for(auto &it:res)
    //     cout<<it<<"\n";
}
// #include <bits/stdc++.h>
// using namespace std;
// int n;
// void func(vector<int> v,int i){
//     v.erase(v.begin()+i-1);
//     cout<<v[(v.size()-1)/2]<<"\n";
// }
// int main(){
//     cin>>n;
//     vector<int> a(n);
//     vector<int> b(n);
//     for(auto &it:a) cin>>it;
//     for(int i=0;i<n;++i) b[i]=i+1;
//     for(int i=0;i<n;++i){
//         func(b,a[i]);
//     }
// }